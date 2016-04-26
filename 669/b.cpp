#include <cstdio>

const int N = 100100;

bool l[N], vis[N];
int len[N];
char s[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  scanf("%s", s);
  for (int i = 0; i < n; ++i) {
    l[i] = (s[i] == '<');
  }
  for (int i = 0; i < n; ++i) {
    scanf("%d", len + i);
  }
  int pos = 0;
  while (!vis[pos]) {
    vis[pos] = true;
    int new_pos = pos + len[pos] * (l[pos] ? -1 : 1);
    if (0 <= new_pos && new_pos < n) {
      pos = new_pos;
    } else {
      puts("FINITE");
      return 0;
    }
  }
  puts("INFINITE");
  return 0;
}
