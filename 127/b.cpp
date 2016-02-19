#include <cstdio>

const int N = 123;
int c[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, x;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    ++c[x];
  }
  int sum = 0;
  for (int i = 0; i < N; ++i) {
    sum += c[i] / 2;
  }
  printf("%d\n", sum / 2);
  return 0;
}
