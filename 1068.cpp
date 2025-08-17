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

  cout << n << " ";
  while (n>1) {
    n = n%2 == 0 ? n/2 : n*3+1;
    cout << n << " ";
  }
}

int main() {
  init_code();

  solve();

  return 0;
}