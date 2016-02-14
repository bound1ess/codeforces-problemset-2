#include <cstdio>
#include <cstring>

using namespace std;

const int N = 123456;
char s[N], t[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  scanf("%s%s", s, t);
  int n = int(strlen(s)), m = int(strlen(t)), ans = 0;
  for (int i = 0; i < n; ++i) {
    bool check = true;
    for (int j = 0; j < m; ++j) {
      if (n <= i + j || s[i + j] != t[j]) {
        check = false;
        break;
      }
    }
    if (check) {
      ++ans;
      i = i + m - 1;
    }
  }
  printf("%d\n", ans);
  return 0;
}
