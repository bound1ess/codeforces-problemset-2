#include <cstdio>
#include <cstring>

const int N = 123;
char s[N];

inline int min(int a, int b) {
  return a < b ? a : b;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int k;
  scanf("%s%d", s, &k);
  int n = int(strlen(s));
  for (int i = 0; i < n; ++i) {
    int max_j = i + 1;
    for (int j = i + 2; j < min(n, i + k + 1); ++j) {
      if (s[max_j] < s[j]) {
        max_j = j;
      }
    }
    if (s[i] < s[max_j]) {
      for (int j = max_j; i < j && 0 < k; --j, --k) {
        char c = s[j];
        s[j] = s[j - 1];
        s[j - 1] = c;
      }
    }
  }
  printf("%s\n", s);
  return 0;
}
