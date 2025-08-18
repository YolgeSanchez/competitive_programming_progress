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
  ll n;
  cin >> n;
  set<ll> x;
  for (int i = 0; i < n; i++) {
    ll t;
    cin >> t;
    x.insert(t);
  }

  cout << x.size() << endl;
}

int main() {
  init_code();

  solve();

  return 0;
}