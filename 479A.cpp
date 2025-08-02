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
  int a, b, c;
  cin >> a >> b >> c;

  int ans = a + b + c;
  ans = max(ans, (a + b) * c);
	ans = max(ans, a * (b + c));
	ans = max(ans, a * b * c);

  cout << ans << endl;
}

int main() {
  init_code();

  solve();

  return 0;
}