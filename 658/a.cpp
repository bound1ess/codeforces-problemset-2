#include <cstdio>

const int N = 55;
int p[N], t[N];

inline int calc(int id, int c, int x) {
  int score = p[id] - c * x;
  return score < 0 ? 0 : score;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, c;
  scanf("%d%d", &n, &c);
  int lim = 0, rad = 0;
  for (int i = 0; i < n; ++i) {
    scanf("%d", p + i);
  }
  for (int i = 0; i < n; ++i) {
    scanf("%d", t + i);
  }
  for (int i = 0, x = 0; i < n; ++i) {
    x += t[i];
    lim += calc(i, c, x);
  }
  for (int i = n - 1, x = 0; 0 <= i; --i) {
    x += t[i];
    rad += calc(i, c, x);
  }
  puts(rad < lim ? "Limak" : (lim < rad ? "Radewoosh" : "Tie"));
  return 0;
}
