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
  string s;
  cin >> s;

  double longest = 0.0;
  for (size_t l = 0; l < s.length(); l++) {
    if (s[l] != 't') continue;
    for (size_t r = l + 2; r < s.length(); r++) {
      if (s[r] != 't') continue;

      int ts = 0;
      for (size_t i = l; i <= r; i++) {
        if (s[i] == 't') ts++;
      }

      double denominator = (r - l + 1) - 2;
      if (denominator > 0) {
        double filling = (ts - 2) / denominator;
        if (filling >= 0) longest = max(longest, filling);
      }
    }
  }

  cout << fixed << setprecision(17) << longest << endl;

}

int main() {
  init_code();

  solve();

  return 0;
}