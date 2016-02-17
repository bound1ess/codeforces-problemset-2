#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, x;
  vector <int> v;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x);
    if (find(v.begin(), v.end(), x) == v.end()) {
      v.push_back(x);
    }
  }
  if (v.size() == 1u) {
    puts("NO");
  } else {
    sort(v.begin(), v.end());
    printf("%d\n", v[1]);
  }
  return 0;
}
