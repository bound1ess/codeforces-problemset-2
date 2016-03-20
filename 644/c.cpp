#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  cin >> n;
  map < string, vector <string> > mp;
  map < vector <string>, vector <string> > inv_mp;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    int sep = 0, m = int(s.length());
    int split = m;
    for (int j = 0; j < m; ++j) {
      if (s[j] == '/') {
        ++sep;
      }
      if (sep == 3) {
        split = j;
        break;
      }
    }
    string host = s.substr(0, split), path = s.substr(split);
    mp[host].push_back(path);
  }
  for (auto el: mp) {
    vector <string> &v = el.second;
    sort(v.begin(), v.end());
    v.resize(unique(v.begin(), v.end()) - v.begin());
    inv_mp[v].push_back(el.first);
  }
  int ans = 0;
  for (auto el: inv_mp) {
    if (2 <= int(el.second.size())) {
      ++ans;
    }
  }
  cout << ans << '\n';
  for (auto el: inv_mp) {
    if (int(el.second.size()) < 2) {
      continue;
    }
    vector <string> &v = el.second;
    for (int i = 0, m = int(v.size()); i < m; ++i) {
      if (0 < i) {
        cout << ' ';
      }
      cout << v[i];
    }
    cout << '\n';
  }
  return 0;
}
