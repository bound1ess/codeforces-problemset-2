#include <cstdio>
#include <map>

using namespace std;

const int N = 1234;
int a[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  map <int, int> s;
  int max = 0;
  for (int i = 0; i < n; ++i) {
    ++s[a[i]];
    if (max < s[a[i]]) {
      max = s[a[i]];
    }
  }
  s.clear();
  for (int i = 0; i < n; ++i) {
    ++s[a[i]];
    if (s[a[i]] == max) {
      printf("%d\n", a[i]);
      break;
    }
  }
  return 0;
}
