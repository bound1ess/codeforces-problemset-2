#include <cstdio>
#include <cstring>

const int N = 101010;
char s[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  scanf("%s", s);
  printf("%s", s);
  for (int i = 0, j = int(strlen(s)) - 1; i < j; ++i, --j) {
    char c = s[i];
    s[i] = s[j], s[j] = c;
  }
  puts(s);
  return 0;
}
