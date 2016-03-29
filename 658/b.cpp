#include <cstdio>

const int N = 150555;
int t[N], p[N];
bool ok[N], skip[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, k, q;
  scanf("%d%d%d", &n, &k, &q);
  for (int i = 0; i < n; ++i) {
    scanf("%d", t + i);
  }
  for (int i = 0; i < k; ++i) {
    p[i] = n;
  }
  t[n] = 0;
  for (int i = 0; i < q; ++i) {
    int type, id;
    scanf("%d%d", &type, &id);
    --id;
    if (type == 1) {
      skip[i] = true;
      int min = 0;
      for (int j = 1; j < k; ++j) {
        if (t[p[j]] < t[p[min]]) {
          min = j;
        }
      }
      if (t[p[min]] < t[id]) {
        p[min] = id;
      }
    } else {
      bool found = false;
      for (int j = 0; j < k; ++j) {
        if (p[j] == id) {
          found = true;
          break;
        }
      }
      ok[i] = found;
    }
  }
  for (int i = 0; i < q; ++i) {
    if (!skip[i]) {
      puts(ok[i] ? "YES" : "NO");
    }
  }
  return 0;
}
