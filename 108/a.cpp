#include <cstdio>

const int N = 12;
char s[N];

class Time {
  public:
    char a, b, c, d;
    Time(char a, char b, char c, char d): a(a), b(b), c(c), d(d) {}
    bool is_palindrome() {
      return a == d && b == c;
    }
    void increase() {
      if (d != '9') {
        ++d;
      } else {
        d = '0';
        if (c != '5') {
          ++c;
        } else {
          c = '0';
          if (a != '2') {
            if (b != '9') {
              ++b;
            } else {
              b = '0';
              ++a;
            }
          } else {
            if (b != '3') {
              ++b;
            } else {
              a = b = '0';
            }
          }
        }
      }
    }
    void print() {
      printf("%c%c:%c%c\n", a, b, c, d);
    }
};

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  scanf("%s", s);
  Time t(s[0], s[1], s[3], s[4]);
  do {
    t.increase();
  } while ( ! t.is_palindrome());
  t.print();
  return 0;
}
