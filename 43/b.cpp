#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

const int N = 26;
int lc[N], uc[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  string s, t;
  getline(cin, s);
  getline(cin, t);
  for (int i = 0, n = int(s.length()); i < n; ++i) {
    if (s[i] == ' ') {
      continue;
    }
    if ('a' <= s[i] && s[i] <= 'z') {
      ++lc[s[i] - 'a'];
    } else {
      ++uc[s[i] - 'A'];
    }
  }
  for (int i = 0, n = int(t.length()); i < n; ++i) {
    if (t[i] == ' ') {
      continue;
    }
    if ('a' <= t[i] && t[i] <= 'z') {
      if (0 < lc[t[i] - 'a']) {
        --lc[t[i] - 'a'];
      } else {
        cout << "NO" << endl;
        return 0;
      }
    } else {
      if (0 < uc[t[i] - 'A']) {
        --uc[t[i] - 'A'];
      } else {
        cout << "NO" << endl;
        return 0;
      }
    }
  }
  cout << "YES" << endl;
  return 0;
}
