#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, m;
  scanf("%d%d", &n, &m);
  vector < pair <int, int> > vec;
  for (int i = 0; i < m; ++i) {
    int a, b;
    scanf("%d%d", &a, &b);
    vec.push_back(make_pair(b, a));
  }
  sort(vec.begin(), vec.end(), greater < pair <int, int> > ());
  int ans = 0;
  for (int i = 0; i < m; ++i) {
    int take = min(vec[i].second, n);
    ans += vec[i].first * take;
    n -= take;
  }
  printf("%d\n", ans);
  return 0;
}
