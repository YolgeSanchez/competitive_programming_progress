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
  int n, g, s = 0, t;
  cin >> n;
  t = (n*2) * (1 + n*2);
  t /= 2;
  int a[n*2];
  set<int> b;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> g;
      a[i+j+1] = g;
      if (!b.count(g)) {
        s += g;
        b.insert(g);
      }
    }
  }
  a[0] = t - s;

  for (int i = 0; i < n*2; i++) {
    cout << a[i] << ' ';
  }

  cout << endl;
}

int main() {
  init_code();

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}