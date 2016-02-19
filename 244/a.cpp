#include <cstdio>

const int N = 1234;
int a[N], b[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, k;
  scanf("%d%d", &n, &k);
  for (int i = 0; i < k; ++i) {
    scanf("%d", a + i);
    --a[i];
  }
  for (int i = 0; i < n * k; ++i) {
    b[i] = -1;
  }
  for (int i = 0; i < k; ++i) {
    b[a[i]] = i;
  }
  for (int i = 0; i < k; ++i) {
    for (int j = 0; j < n - 1; ++j) {
      for (int q = 0; q < n * k; ++q) {
        if (b[q] == -1) {
          b[q] = i;
          break;
        }
      }
    }
  }
  for (int i = 0; i < k; ++i) {
    bool first = true;
    for (int j = 0; j < n; ++j) {
      for (int q = 0; q < n * k; ++q) {
        if (b[q] != i) {
          continue;
        }
        if ( ! first) {
          putchar(' ');
        } else {
          first = false;
        }
        printf("%d", q + 1);
        b[q] = -1;
      }
    }
    putchar('\n');
  }
  return 0;
}
