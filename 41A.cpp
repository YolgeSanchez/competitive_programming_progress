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

int main() {
  init_code();

  string s, t;
  cin >> s >> t;

  if (s.length() != t.length()) {
    cout << "NO";
    return 0;
  }

  for (int i = 0; i < s.length(); i++) {
    if (s[i] != t[t.length()-i-1]) {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";

  return 0;
}