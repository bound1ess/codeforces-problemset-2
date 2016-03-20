#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <utility>

using namespace std;

const int N = 6;

void build(int n, vector <string> &sv, string tmp = "", int len = 0) {
  if (len == n) {
    sv.push_back(tmp);
    return;
  }
  if (len == 0) {
    tmp = string();
    for (int i = 0; i < n; ++i) {
      tmp += '?';
    }
  }
  for (int i = 0; i < N; ++i) {
    tmp[len] = 'a' + i;
    build(n, sv, tmp, len + 1);
  }
}

inline bool can_apply(const string &s, const string &a) {
  return s[0] == a[0] && s[1] == a[1];
}

inline string apply(const string &s, const string &b) {
  string t = s;
  t.erase(t.begin());
  t[0] = b[0];
  return t;
}

bool solve(const string &s, const vector < pair <string, string> > &opv) {
  if (int(s.length()) == 1) {
    return s == "a";
  }
  for (int i = 0, q = int(opv.size()); i < q; ++i) {
    if (can_apply(s, opv[i].first)) {
      string t = apply(s, opv[i].second);
      if (solve(t, opv)) {
        return true;
      }
    }
  }
  return false;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, q;
  cin >> n >> q;
  vector < pair <string, string> > opv;
  for (int i = 0; i < q; ++i) {
    string a, b;
    cin >> a >> b;
    opv.push_back(make_pair(a, b));
  }
  vector <string> sv;
  build(n, sv);
  int ans = 0;
  for (int i = 0, m = int(sv.size()); i < m; ++i) {
    if (solve(sv[i], opv)) {
      ++ans;
    }
  }
  cout << ans << endl;
  return 0;
}
