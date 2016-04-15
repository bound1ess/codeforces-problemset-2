#include <cstdio>

const int N = 222;
char s[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  scanf("%s", s);
  int half = n / 2, low = 0, high;
  for (int i = 0; i < n; ++i) {
    if (s[i] == 'x') {
      ++low;
    }
  }
  high = n - low;
  if (half < high) {
    printf("%d\n", high - half);
    for (int i = 0; i < n && half < high; ++i) {
      if (s[i] == 'X') {
        s[i] = 'x';
        --high;
      }
    }
  } else if (half < low) {
    printf("%d\n", low - half);
    for (int i = 0; i < n && half < low; ++i) {
      if (s[i] == 'x') {
        s[i] = 'X';
        --low;
      }
    }
  } else {
    puts("0");
  }
  puts(s);
  return 0;
}
