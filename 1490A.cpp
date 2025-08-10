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
  int n, ans = 0;
  cin >> n; 
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  for (int i = 1; i < a.size(); i++) {
    while (max(a[i-1], a[i])/(double)min(a[i-1],a[i]) > 2) {
      int maxIdx = a[i-1] > a[i] ? i-1 : i;
      int minIdx = a[i-1] > a[i] ? i : i-1;
      int ins = maxIdx > minIdx ? maxIdx : maxIdx + 1;

      a.insert(a.begin() + ins, (int)ceil(a[maxIdx]/2.0));
      ++ans;
    }
  }

  cout << ans << endl;
}

int main() {
  init_code();

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}