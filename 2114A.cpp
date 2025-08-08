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
  ll num, ans[2];
  cin >> num;
  ll k = floor(sqrt(num));
  if (k * k == num) {
    cout << 0 << ' ' << k << endl;
  }else {
    cout << -1 << endl;
  }
}

int main() {
  init_code();

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}