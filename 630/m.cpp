#include <cstdio>
#include <iostream>

using namespace std;

const long long C = 360LL, T = 44LL;

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  long long ang;
  cin >> ang;
  ang = ((ang % C) + C) % C;
  ang = (ang + T) % C;
  cout << ((ang % (C - 1LL)) / (C / 4LL)) << endl;
  return 0;
}
