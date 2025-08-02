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

map<string, int> g;

void solve() {
  string s;
  cin >> s;
  if (g.count(s)) g[s]++;
  else g[s] = 1;
}

int main() {
  init_code();

  int t, m=-1;
  string n;
  cin >> t;
  while (t--) solve();
  for (const auto& v: g) {
    if (v.second > m) {
      m = v.second;
      n = v.first;
    }
  }

  cout << n;

  return 0;
}