#include <cstdio>

const int N = 1234, INF = 123456789;
int a[N], inst[N], src[N], dest[N];

inline int compute(int n) {
  int min = 0, max = 0;
  for (int i = 1; i < n; ++i) {
    if (a[i] < a[min]) {
      min = i;
    }
    if (a[max] < a[i]) {
      max = i;
    }
  }
  return a[max] - a[min];
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, k;
  scanf("%d%d", &n, &k);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  int init = compute(n);
  for (int i = 0; i < k; ++i) {
    int min = 0, max = 0;
    for (int j = 1; j < n; ++j) {
      if (a[j] < a[min]) {
        min = j;
      }
      if (a[max] < a[j]) {
        max = j;
      }
    }
    if (min == max) {
      inst[i] = INF;
      continue;
    }
    ++a[min], --a[max];
    src[i] = max, dest[i] = min;
    inst[i] = compute(n);
  }
  int min = 0;
  for (int i = 1; i < k; ++i) {
    if (inst[i] < inst[min]) {
      min = i;
    }
  }
  int inst_val, cnt;
  if (inst[min] < init) {
    cnt = min + 1;
    inst_val = inst[min];
  } else {
    cnt = 0;
    inst_val = init;
  }
  printf("%d %d\n", inst_val, cnt);
  for (int i = 0; i < cnt; ++i) {
    printf("%d %d\n", src[i] + 1, dest[i] + 1);
  }
  return 0;
}
