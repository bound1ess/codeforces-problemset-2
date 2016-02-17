#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 123456;
int a[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, max = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  for (int i = 0; i < n; ++i) {
    if (a[max] < a[i]) {
      max = i;
    }
  }
  if (1 == a[max]) {
    a[max] = 2;
  } else {
    a[max] = 1;
  }
  sort(a, a + n);
  for (int i = 0; i < n; ++i) {
    if (0 < i) {
      putchar(' ');
    }
    printf("%d", a[i]);
  }
  putchar('\n');
  return 0;
}
