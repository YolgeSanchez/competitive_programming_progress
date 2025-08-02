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
  string t, n = "";
  set<char> v = {'A', 'E', 'I', 'Y', 'O', 'U', 'a', 'e', 'i', 'y', 'o', 'u'};
  cin >> t;

  for (int i = 0; i < t.length(); i++) {
    if (v.count(t[i])) continue;
    if (t[i] <= 'Z') t[i] += 32; 

    n += ".";
    n += t[i];
  }

  cout << n;
}

int main() {
  init_code();

  solve();

  return 0;
}