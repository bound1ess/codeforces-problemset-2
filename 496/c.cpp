#include <cstdio>
#include <set>

using namespace std;

const int N = 123;
char s[N][N];
bool b[N];

inline void go(int n, int m, int &ans) {
  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < m; ++j) {
      if (b[j]) {
        continue;
      }
      if (s[i][j] < s[i + 1][j]) {
        break;
      }
      if (s[i + 1][j] < s[i][j]) {
        b[j] = true;
        ++ans;
      }
    }
  }
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m;
  scanf("%d%d", &n, &m);
  for (int i = 0; i < n; ++i) {
    scanf("%s", s[i]);
  }
  int ans = 0;
  for (int i = 0; i < N; ++i) {
    go(n, m, ans);
  }
  printf("%d\n", ans);
  return 0;
}
