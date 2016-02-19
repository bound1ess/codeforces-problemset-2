#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

inline bool is_lucky(const string &s) {
  int n = int(s.length());
  for (int i = 0; i < n; ++i) {
    if (s[i] != '4' && s[i] != '7') {
      return false;
    }
  }
  return true;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  string s;
  cin >> s;
  vector <string> sub;
  map <string, int> rep;
  int n = int(s.length());
  for (int i = 0; i < n; ++i) {
    for (int j = i; j < n; ++j) {
      string t;
      for (int k = i; k <= j; ++k) {
        t += s[k];
      }
      if (is_lucky(t)) {
        sub.push_back(t);
        ++rep[t];
      }
    }
  }
  int best = 0;
  int m = int(sub.size());
  for (int i = 0; i < m; ++i) {
    if (best < rep[sub[i]]) {
      best = rep[sub[i]];
    }
  }
  if (best == 0) {
    cout << -1 << endl;
    return 0;
  }
  vector <string> best_sub;
  for (int i = 0; i < m; ++i) {
    if (rep[sub[i]] == best) {
      best_sub.push_back(sub[i]);
    }
  }
  cout << *min_element(best_sub.begin(), best_sub.end()) << endl;
  return 0;
}
