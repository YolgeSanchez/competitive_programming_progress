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
  int n, e=0, o=0, le, lo;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    int t;
    cin >> t;

    if (t%2==0) e++, le=i;
    else o++, lo=i;
  }

  cout << (e > o ? lo : le);
}

int main() {
  init_code();

  solve();

  return 0;
}