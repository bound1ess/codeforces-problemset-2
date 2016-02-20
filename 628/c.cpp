#include <cstdio>

using namespace std;

const int N = 1234567;
char s[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, k;
  scanf("%d%d%s", &n, &k, s);
  for (int i = 0; i < n; ++i) {
    int best_dist = 0;
    char best = s[i];
    for (char j = 'a'; j <= 'z'; ++j) {
      int dist = j - s[i];
      if (dist < 0) {
        dist *= -1;
      }
      if (dist <= k && best_dist < dist) {
        best = j;
        best_dist = dist;
      }
    }
    s[i] = best;
    k -= best_dist;
  }
  if (k == 0) {
    printf("%s\n", s);
  } else {
    puts("-1");
  }
  return 0;
}
