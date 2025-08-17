#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void init_code() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
}

void solve() {
  int n;
  vector<int> o, e;
  cin >> n;

  if (n == 1) {
    cout << 1 << endl;
    return;
  }

  for (int i = 1; i <= n; i++) {
    if (i%2 == 0) e.push_back(i);
    else o.push_back(i);
  }
  
  if (abs(o.back() - e.front()) == 1 && abs(o.front() - e.back()) == 1) {
    cout << "NO SOLUTION" << endl;
    return;
  }

  if (abs(o.back() - e.front()) != 1) {
    for (int x: o) {
      cout << x << " ";
    }
    for (int x: e) {
      cout << x << " ";
    }
  } else {
    for (int x: e) {
      cout << x << " ";
    }
    for (int x: o) {
      cout << x << " ";
    }
  }
}

int main() {
  init_code();

  solve();

  return 0;
}