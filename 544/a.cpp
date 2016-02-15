#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

inline void copy_seg(const string &src, string &dest, int l, int r) {
  while (l < r) {
    dest += src[l];
    ++l;
  }
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  string s, buf;
  vector <string> a;
  vector <char> ch;
  int k, pos = 0, seq = 0, len;
  cin >> k >> s;
  len = int(s.length());
  if (len < k) {
    cout << "NO" << endl;
    return 0;
  }
  while (seq < k && pos < len) {
    int i = pos + 1;
    ++seq, ch.push_back(s[pos]);
    while (find(ch.begin(), ch.end(), s[i]) != ch.end()) {
      ++i;
    }
    buf.clear();
    copy_seg(s, buf, pos, i);
    a.push_back(buf);
    pos = i;
  }
  if (0 < seq) {
    while (pos < len) {
      a[seq - 1] += s[pos];
      ++pos;
    }
  }
  if (k == seq) {
    cout << "YES" << endl;
    for (int i = 0; i < k; ++i) {
      cout << a[i] << endl;
    }
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
