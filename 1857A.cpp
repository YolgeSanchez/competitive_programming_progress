#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
using namespace std;

void init_code() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

void solve() {
  int n, s = 0, a;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;
    s += a;
  }

  cout << (s%2 == 0 ? "yes" : "no") << endl;
}

int main() {
  init_code();

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}