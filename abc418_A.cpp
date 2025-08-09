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
  int n;
  string s;
  cin >> n >> s;
  if (s.length() < 3) {
    cout << "No";
    return;
  }
  string t = s.substr(n-3);
  cout << (t == "tea" ? "Yes" : "No");
}

int main() {
  init_code();

  solve();

  return 0;
}