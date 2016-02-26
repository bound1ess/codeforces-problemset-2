#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

inline bool is_char(char c) {
  return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

inline char norm(char c) {
  if ('A' <= c && c <= 'Z') {
    return c + ('a' - 'A');
  }
  return c;
}

inline bool check(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  string s;
  getline(cin, s);
  int n = int(s.length()), pos = 0;
  for (int i = 0; i < n; ++i) {
    if (is_char(s[i])) {
      pos = i;
    }
  }
  cout << (check(norm(s[pos])) ? "YES" : "NO") << endl;
  return 0;
}
