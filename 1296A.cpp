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
  int n, odd = 0, even = 0, tmp;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    if (tmp%2 == 0) even++;
    else odd++;
  }

  if (odd == 0) cout << "NO" << endl;
  else if (even == 0) {
    if (n%2 != 0) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  else cout << "YES" << endl;
}

int main() {
  init_code();

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}