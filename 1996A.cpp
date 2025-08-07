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
  int legs;
  cin >> legs; 

  cout << (legs + 2) / 4 << endl;
}

int main() {
  init_code();

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}