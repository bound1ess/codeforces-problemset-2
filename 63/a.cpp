#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

class CrewMember {
  public:
    string name;
    int prio;
    int id;
    CrewMember(string name, int prio, int id): name(name), prio(prio), id(id) {}
};

inline int get_prio(const string &type) {
  if ("rat" == type) {
    return 0;
  } else if ("woman" == type || "child" == type) {
    return 1;
  } else if ("man" == type) {
    return 2;
  } else {
    return 3;
  }
}

inline bool compare(const CrewMember &l, const CrewMember &r) {
  if (l.prio == r.prio) {
    return l.id < r.id;
  }
  return l.prio < r.prio;
}

int main() {
  freopen("input", "rt", stdin);
  freopen("output", "wt", stdout);
  int n;
  cin >> n;
  vector <CrewMember> v;
  string name, type;
  for (int i = 0; i < n; ++i) {
    cin >> name >> type;
    v.push_back(CrewMember(name, get_prio(type), i));
  }
  sort(v.begin(), v.end(), compare);
  for (int i = 0; i < n; ++i) {
    cout << v[i].name << endl;
  }
  return 0;
}
