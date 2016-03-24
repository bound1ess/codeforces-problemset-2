#include <cstdio>

const int N = 222;
bool vis[N], g[N][N];

void dfs(int v) {
  vis[v] = true;
  for (int i = 0; i < N; ++i) {
    if (g[v][i] && ! vis[i]) {
      dfs(i);
    }
  }
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m;
  scanf("%d%d", &n, &m);
  bool lang = false;
  for (int i = 0; i < n; ++i) {
    int k;
    scanf("%d", &k);
    if (0 < k) {
      lang = true;
    }
    for (int j = 0; j < k; ++j) {
      int x;
      scanf("%d", &x);
      g[i][n + x] = g[n + x][i] = true;
    }
  }
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    if ( ! vis[i]) {
      dfs(i);
      ++ans;
    }
  }
  printf("%d\n", lang ? ans - 1 : ans);
  return 0;
}
