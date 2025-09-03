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
  string a, b; cin >> a >> b;
  int n = a.size();
  int m = b.size();

  if (m < n || m > 2 * n || a[0] != b[0]) {
    cout << "NO\n";
    return;
  }

  vector<int> aa, bb;
  int cnt = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] != a[i-1]) {
      aa.push_back(cnt);
      cnt = 1;
    }
    else cnt++;
  }

  aa.push_back(cnt);
  cnt = 1;
  for (int i = 1; i < m; i++) {
    if (b[i] != b[i-1]) {
      bb.push_back(cnt);
      cnt = 1;
    }
    else cnt++;
  }

  bb.push_back(cnt);
  if (aa.size() != bb.size()) {
    cout << "NO\n";
    return;
  }

  n = aa.size();
  for (int i = 0; i < n; i++) {
    if (aa[i] > bb[i] || aa[i] * 2 < bb[i]) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main() {
  init_code();

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}