#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 1234567;

int a[N], ans[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, v, k, x, ans_len = 0;
  scanf("%d%d", &n, &v);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &k);
    bool added = false;
    for (int j = 0; j < k; ++j) {
      scanf("%d", &x);
      if (x < v && ! added) {
        added = true;
        ans[ans_len] = i + 1;
        ++ans_len;
      }
    }
  }
  sort(ans, ans + ans_len);
  printf("%d\n", ans_len);
  for (int i = 0; i < ans_len; ++i) {
    if (0 < i) {
      putchar(' ');
    }
    printf("%d", ans[i]);
  }
  if (0 < ans_len) {
    putchar('\n');
  }
  return 0;
}
