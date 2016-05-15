#include <cstdio>

const int N = 123456;
int id[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, k;
  scanf("%d%d", &n, &k);
  for (int i = 0; i < n; ++i) {
    scanf("%d", id + i);
  }
  int pos = 1;
  while (pos < k) {
    k -= pos;
    ++pos;
  }
  printf("%d\n", id[k - 1]);
  return 0;
}
