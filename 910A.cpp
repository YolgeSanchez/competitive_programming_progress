#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
using namespace std;

void init_code() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}

void solve() {
  int n, d, e, a = 0, j = 0;
  string s;
  cin >> n >> d >> s;

  while (a != n - 1) {
    e = a;
    for (int t = d; t > 0; t--) {
      int i = t + a;
      if (i < n && s[i] == '1') {
        j++;
        a = i;
        break;
      };
    }
    if (e == a) break;
  }

  cout << (e == a ? -1 : j) << endl;

}

int main() {
  init_code();
  solve();
  return 0;
}