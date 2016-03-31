#include <string>
#include <iostream>
#include <vector>
#include <utility>
#include <functional>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  ios_base::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  vector < vector < pair <int, string> > > v(m);
  for (int i = 0; i < n; ++i) {
    string name;
    int points, region;
    cin >> name >> region >> points;
    v[region - 1].push_back(make_pair(points, name));
  }
  for (int i = 0; i < m; ++i) {
    sort(v[i].begin(), v[i].end(), greater < pair <int, string> > ());
  }
  for (int i = 0; i < m; ++i) {
    if (int(v[i].size()) == 2 || v[i][1].first != v[i][2].first) {
      cout << v[i][0].second << ' ' << v[i][1].second << '\n';
    } else {
      cout << "?\n";
    }
  }
  return 0;
}
