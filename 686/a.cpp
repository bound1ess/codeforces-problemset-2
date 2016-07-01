#include <iostream>

using namespace std;

const int N = 1010;

bool add[N];
int val[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n, x;
  cin >> n >> x;
  for (int i = 0; i < n; ++i) {
    char c;
    cin >> c >> val[i];
    add[i] = '+' == c;
  }
  long long left = x;
  int sad = 0;
  for (int i = 0; i < n; ++i) {
    if (add[i]) {
      left += val[i];
      continue;
    }
    if (left < val[i]) {
      ++sad;
    } else {
      left -= val[i];
    }
  }
  cout << left << ' ' << sad << '\n';
  return 0;
}
