#include <cstdio>

const int N = 1234;
int cnt[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, x;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    ++cnt[x];
  }
  int half = (n + 1) / 2;
  for (int i = 0; i < N; ++i) {
    if (half < cnt[i]) {
      puts("NO");
      return 0;
    }
  }
  puts("YES");
  return 0;
}
