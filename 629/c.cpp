#include <cstdio>

const int N = 123456, M = 2222;
const int MOD = int(1e9) + 7;

char s[N];
int dp[M][M];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m;
  scanf("%d%d", &n, &m);
  scanf("%s", s);
  dp[0][0] = 1;
  for (int i = 1; i <= n - m; ++i) {
    dp[i][0] = dp[i - 1][1];
    for (int j = 1; j <= i; ++j) {
      dp[i][j] = (dp[i - 1][j + 1] + dp[i - 1][j - 1]) % MOD;
      dp[i][j] %= MOD;
    }
  }
  int bal = 0, min_bal = 0;
  for (int i = 0; i < m; ++i) {
    bal += (s[i] == '(' ? 1 : -1);
    if (bal < min_bal) {
      min_bal = bal;
    }
  }
  int ans = 0;
  for (int i = 0; i <= n - m; ++i) {
    for (int j = 0; j <= i; ++j) {
      if (-min_bal <= j && bal + j <= n - m && 0 <= bal + j) {
        ans += (dp[i][j] * 1LL * dp[n - m - i][bal + j]) % MOD;
        ans %= MOD;
      }
    }
  }
  printf("%d\n", ans);
  return 0;
}
