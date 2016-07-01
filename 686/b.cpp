#include <cstdio>

const int N = 101;
int a[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  bool go = true;
  int off = 0;
  while (go) {
    go = false;
    ++off;
    for (int i = 0; i < n - off; ++i) {
      if (a[i + 1] < a[i]) {
        int tmp = a[i];
        a[i] = a[i + 1], a[i + 1] = tmp;
        go = true;
        printf("%d %d\n", i + 1, i + 2);
      }
    }
  }
  return 0;
}
