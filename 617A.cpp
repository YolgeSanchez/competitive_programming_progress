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
  int n, ans=0;
  cin >> n;

  while (n >= 5) ans++, n-=5;
  if (n>0) ans++;
  cout << ans;
}

int main() {
  init_code();

  solve();

  return 0;
}