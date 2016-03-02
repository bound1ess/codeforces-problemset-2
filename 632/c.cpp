#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

inline bool cmp(string &a, string &b) {
  return a + b < b + a;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector <string> v;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    v.push_back(s);
  }
  sort(v.begin(), v.end(), cmp);
  for (int i = 0; i < n; ++i) {
    cout << v[i];
  }
  cout << endl;
  return 0;
}
