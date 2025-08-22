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
  int t, n, a[4] = {0, 0, 0, 0};
  cin >> n;

  while (n--) {
    cin >> t;
    a[t-1]++;
  }

  int ans = a[3] + a[2];
  a[0] = max(0, a[0] - a[2]);

  ans += (a[1] + 1) / 2;
  if (a[1] % 2 == 1) {
    a[0] = max(0, a[0] - 2);
  }

  ans += (a[0] + 3) / 4;


  cout << ans << endl;


}

int main() {
  init_code();

  solve();

  return 0;
}