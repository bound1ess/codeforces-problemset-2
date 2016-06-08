#include <cstdio>
#include <vector>
#include <map>
#include <cstring>

using namespace std;

const int N = 123456, MOD = int(1e9) + 7, BASE = 3;
const int ALPH = 26, DIG = 10, TOTAL = 64, BITS = 6;

char s[N];
vector <char> p;
map <char, int> mp;

inline int pow(int exp) {
  int md = MOD, b = BASE, ans = 1;
  while (0 < exp) {
    if (exp % 2 == 1) {
      ans = ((long long) ans * b) % md;
    }
    exp /= 2;
    b = ((long long) b * b) % md;
  }
  return ans;
}

inline void build() {
  for (int i = 0; i < DIG; ++i) {
    p.push_back('0' + i);
  }
  for (int i = 0; i < ALPH; ++i) {
    p.push_back('A' + i);
  }
  for (int i = 0; i < ALPH; ++i) {
    p.push_back('a' + i);
  }
  p.push_back('-');
  p.push_back('_');
  for (int i = 0; i < TOTAL; ++i) {
    mp[p[i]] = i;
  }
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  scanf("%s", s);
  int n = int(strlen(s)), cnt = 0;
  build();
  for (int i = 0; i < n; ++i) {
    int val = mp[s[i]];
    for (int j = 0; j < BITS; ++j) {
      if (0 == (val & (1 << j))) {
        ++cnt;
      }
    }
  }
  printf("%d\n", pow(cnt));
  return 0;
}
