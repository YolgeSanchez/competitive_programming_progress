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
  ll n, last, ans = 0, tmp;
  cin >> n >> last;

  for (int i = 1; i < n; i++) {
    cin >> tmp;
    if (last > tmp) {
      ans += last - tmp;
      last = tmp + (last - tmp);
    } else last = tmp;
  }

  cout << ans << endl;
}

int main() {
  init_code();

  solve();

  return 0;
}