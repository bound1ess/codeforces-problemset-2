#include <cstdio>
#include <algorithm>
#include <functional>

using namespace std;

const int N = 12;

int a[N];

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int k;
  scanf("%d", &k);
  for (int i = 0; i < N; ++i) {
    scanf("%d", a + i);
  }
  sort(a, a + N, greater <int> ());
  int pos = 0, sum = 0;
  while (sum < k && pos < N) {
    sum += a[pos];
    ++pos;
  }
  printf("%d\n", k <= sum ? pos : -1);
  return 0;
}
