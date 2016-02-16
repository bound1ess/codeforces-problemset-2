#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

const int N = 1234;
char t[N], s[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  scanf("%s%s", t, s);
  vector <char> l, r;
  bool sep = false;
  int n = int(strlen(t)), m = int(strlen(s));
  for (int i = 0; i < n; ++i) {
    if (t[i] == '|') {
      sep = true;
      continue;
    }
    (sep ? r : l).push_back(t[i]);
  }
  for (int i = 0; i < m; ++i) {
    (l.size() < r.size() ? l : r).push_back(s[i]);
  }
  if (l.size() != r.size()) {
    puts("Impossible");
    return 0;
  }
  for (int i = 0, k = int(l.size()); i < k; ++i) {
    putchar(l[i]);
  }
  putchar('|');
  for (int i = 0, k = int(r.size()); i < k; ++i) {
    putchar(r[i]);
  }
  putchar('\n');
  return 0;
}
