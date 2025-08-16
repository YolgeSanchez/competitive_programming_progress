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
  int n, ans = 1;
  cin >> n;
  int a[n], b[n];

  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    ans += max(a[i] - b[i], 0);
  };

  cout << ans << endl;

}

int main() {
  init_code();

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}