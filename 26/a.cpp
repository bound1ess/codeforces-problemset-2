#include <cstdio>

const int N = 5000;
bool prime[N];

inline bool check(int x) {
  int cnt = 0;
  for (int i = 2; i < N; ++i) {
    if (prime[i] && x % i == 0) {
      ++cnt;
      while (x % i == 0) {
        x /= i;
      }
    }
  }
  return 2 == cnt;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, ans = 0;
  scanf("%d", &n);
  for (int i = 2; i < N; ++i) {
    prime[i] = true;
  }
  for (int i = 2; i * i < N; ++i) {
    if (prime[i]) {
      for (int j = i * i; j < N; j += i) {
        prime[j] = false;
      }
    }
  }
  for (int i = 1; i <= n; ++i) {
    if (check(i)) {
      ++ans;
    }
  }
  printf("%d\n", ans);
  return 0;
}
