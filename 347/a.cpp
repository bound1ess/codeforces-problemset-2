#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 123;
int a[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  sort(a, a + n);
  printf("%d", a[n - 1]);
  for (int i = 1; i < n - 1; ++i) {
    printf(" %d", a[i]);
  }
  printf(" %d\n", a[0]);
  return 0;
}
