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
  int s, n;
  cin >> s >> n;
  vector<pair<int, int>> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }

  sort(a.begin(), a.end());

  for (int i = 0; i < n; i++) {
    if (a[i].first >= s) {
      cout << "NO" << endl;
      return;
    }

    s += a[i].second;
  }

  cout << "YES" << endl;
}

int main() {
  init_code();

  solve();

  return 0;
}