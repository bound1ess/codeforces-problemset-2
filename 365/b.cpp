#include <cstdio>

const int N = 123456;
int a[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  if (n <= 2) {
    printf("%d\n", n);
    return 0;
  }
  int max = 2, curr = 2;
  for (int i = 2; i < n; ++i) {
    if (a[i - 2] + a[i - 1] == a[i]) {
      ++curr;
    } else {
      curr = 2;
    }
    if (max < curr) {
      max = curr;
    }
  }
  printf("%d\n", max);
  return 0;
}
