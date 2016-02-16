#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 4, M = 10;
char s[M][M];
int c[M];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int k;
  scanf("%d", &k);
  for (int i = 0; i < N; ++i) {
    scanf("%s", s[i]);
  }
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (s[i][j] != '.') {
        ++c[s[i][j] - '0'];
      }
    }
  }
  for (int i = 0; i < M; ++i) {
    if (k * 2 < c[i]) {
      puts("NO");
      return 0;
    }
  }
  puts("YES");
  return 0;
}
