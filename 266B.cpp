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
  int n, t;
  string s;
  cin >> n >> t >> s;

  for (int i = 0; i < t; i++) for (int j = 1; j < n; j++) {
    if (s[j] == 'G' && s[j-1] != s[j]) {
      char tmp = s[j];
      s[j] = s[j-1];
      s[j-1] = tmp;
      j++;
    } 
  }

  cout << s;
}

int main() {
  init_code();

  solve();

  return 0;
}