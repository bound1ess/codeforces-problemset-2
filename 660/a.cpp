#include <cstdio>

const int N = 4444, M = int(1e6);

int a[N], p[M], v[N];
bool sv[M];

int gcd(int a, int b) {
  return 0 == b ? a : gcd(b, a % b);
}

inline bool coprime(int a, int b) {
  return 1 == gcd(a < b ? b : a, a < b ? a : b);
}

inline int pick(int a, int b, int cnt) {
  for (int i = 0; i < cnt; ++i) {
    if (coprime(a, p[i]) && coprime(b, p[i])) {
      return p[i];
    }
  }
  return -1;
}

int main() {
  // I'm solving this problem the hard way because I'm bored
  for (int i = 2; i < M; ++i) {
    sv[i] = true;
  }
  for (int i = 2; i * i < M; ++i) {
    if (sv[i]) {
      for (int j = i * i; j < M; j += i) {
        sv[j] = false;
      }
    }
  }
  int primes = 0;
  for (int i = 2; i < M; ++i) {
    if (sv[i]) {
      p[primes] = i;
      ++primes;
    }
  }
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", a + i);
  }
  int cnt = 1, at = 1;
  v[0] = a[0];
  for (int i = 1; i < n; ++i) {
    if (coprime(v[at - 1], a[i])) {
      v[at] = a[i];
      ++at, ++cnt;
    } else {
      v[at] = pick(v[at - 1], a[i], primes);
      ++at, ++cnt;
      v[at] = a[i];
      ++at, ++cnt;
    }
  }
  printf("%d\n", cnt - n);
  for (int i = 0; i < cnt; ++i) {
    if (0 < i) {
      putchar(' ');
    }
    printf("%d", v[i]);
  }
  putchar('\n');
  return 0;
}
