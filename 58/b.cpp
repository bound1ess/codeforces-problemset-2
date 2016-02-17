#include <cstdio>
#include <vector>

using namespace std;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  vector <int> ans;
  ans.push_back(n);
  while (true) {
    int last = ans[ans.size() - 1u], val = 1;
    for (int i = 2; i <= last; ++i) {
      if (last % i == 0) {
        val = last / i;
        break;
      }
    }
    if (last != val) {
      ans.push_back(val);
    }
    if (1 == val) {
      break;
    }
  }
  for (int i = 0, m = int(ans.size()); i < m; ++i) {
    if (0 < i) {
      putchar(' ');
    }
    printf("%d", ans[i]);
  }
  putchar('\n');
  return 0;
}
