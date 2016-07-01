#include <cstdio>

const int N = 111;

char s[N];
bool b[N];
int dp[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, d;
  scanf("%d%d", &n, &d);
  for (int i = 0; i < d; ++i) {
    scanf("%s", s);
    bool ok = false;
    for (int j = 0; j < n; ++j) {
      if ('0' == s[j]) {
        ok = true;
        break;
      }
    }
    b[i] = ok;
  }
  dp[0] = int(b[0]);
  int ans = dp[0];
  for (int i = 1; i < d; ++i) {
    dp[i] = (b[i] ? dp[i - 1] + 1 : 0);
    if (ans < dp[i]) {
      ans = dp[i];
    }
  }
  printf("%d\n", ans);
  return 0;
}
