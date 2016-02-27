#include <cstdio>

const int N = 123456;
int v[N];

inline int go(int x) {
  int ans = 0;
  while (0 < x) {
    x /= 5;
    ans += x;
  }
  return ans;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int m;
  scanf("%d", &m);
  int l = 0, r = int(1e9);
  while (l <= r) {
    int mid = (l + r) / 2;
    if (go(mid) < m) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  int ans = 0;
  while (go(l) == m) {
    v[ans] = l;
    ++ans;
    ++l;
  }
  printf("%d\n", ans);
  for (int i = 0; i < ans; ++i) {
    if (0 < i) {
      putchar(' ');
    }
    printf("%d", v[i]);
  }
  if (0 < ans) {
    putchar('\n');
  }
  return 0;
}
