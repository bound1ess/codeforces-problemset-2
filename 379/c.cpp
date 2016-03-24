#include <cstdio>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  vector < pair <int, int> > a(n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i].first);
    a[i].second = i;
  }
  sort(a.begin(), a.end());
  int curr = 1;
  vector <int> b(n);
  for (int i = 0; i < n; ++i) {
    if (a[i].first <= curr) {
      b[a[i].second] = curr;
      ++curr;
    } else {
      b[a[i].second] = a[i].first;
      curr = a[i].first + 1;
    }
  }
  for (int i = 0; i < n; ++i) {
    if (0 < i) {
      putchar(' ');
    }
    printf("%d", b[i]);
  }
  putchar('\n');
  return 0;
}
