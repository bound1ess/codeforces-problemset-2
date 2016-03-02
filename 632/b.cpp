#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1234567;
int p[N];
long long gsum[N], bsum[N];
char s[N];

inline long long get(const long long* src, int l, int r) {
  return src[r + 1] - src[l];
}

inline long long max(long long a, long long b) {
  return a < b ? b : a;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", p + i);
  }
  scanf("%s", s);
  // global prefix sum
  for (int i = 0; i < n; ++i) {
    gsum[i + 1] = gsum[i] + (long long) p[i];
  }
  // p. sum for B's
  for (int i = 0; i < n; ++i) {
    bsum[i + 1] = bsum[i];
    if (s[i] == 'B') {
      bsum[i + 1] += (long long) p[i];
    }
  }
  long long ans = 0LL;
  for (int i = 0; i < n; ++i) {
    ans = max(ans, get(gsum, 0, i) - 2 * get(bsum, 0, i));
    ans = max(ans, get(gsum, i, n - 1) - 2 * get(bsum, i, n - 1));
  }
  ans += get(bsum, 0, n - 1);
  cout << ans << endl;
  return 0;
}
