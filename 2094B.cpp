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
  int n, m, l, r;
  cin >> n >> m >> l >> r;

  if (n == m) {
    cout << l << ' ' << r << endl;
    return;
  }

  cout << max(l, l - (m + l));
  m = max(0, m + l);
  cout << ' ' << min(r, 0 + m);
  cout << endl;
}

int main() {
  init_code();

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}