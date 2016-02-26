#include <cstdio>

const int N = 123456;
char s[N];

inline bool check(int curr_x, int curr_y, int dest_x, int dest_y) {
  return curr_x == dest_x && curr_y == dest_y;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  int src_x, src_y;
  int dest_x, dest_y;
  scanf("%d", &n);
  scanf("%d%d", &src_x, &src_y);
  scanf("%d%d", &dest_x, &dest_y);
  scanf("%s", s);
  int curr_x = src_x, curr_y = src_y;
  int ans = 0;
  for (int i = 0; i < n; ++i, ++ans) {
    if (check(curr_x, curr_y, dest_x, dest_y)) {
      break;
    }
    if (s[i] == 'S') {
      if (dest_y < curr_y) {
        --curr_y;
      }
    } else if (s[i] == 'N') {
      if (curr_y < dest_y) {
        ++curr_y;
      }
    } else if (s[i] == 'W') {
      if (dest_x < curr_x) {
        --curr_x;
      }
    } else if (s[i] == 'E') {
      if (curr_x < dest_x) {
        ++curr_x;
      }
    }
  }
  printf("%d\n", check(curr_x, curr_y, dest_x, dest_y) ? ans : -1);
  return 0;
}
