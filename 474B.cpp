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
  ll n, m, a, q;
  cin >> n;
  vector<ll> prefix(n+1, 0);
  for (ll i = 1; i  <= n; i++) {
    cin >> a;
    prefix[i] = prefix[i-1] + a;
  }

  cin >> m;
  while (m--) {
    cin >> q; 

    ll l = 0, r = n, ans;
    while (l <= r) {
      ll mid = l + (r - l)/2;
      if (prefix[mid] < q) {
        ans = mid;
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }

    cout << ans + 1 << endl;
  }
}

int main() {
  init_code();

  solve();

  return 0;
}
