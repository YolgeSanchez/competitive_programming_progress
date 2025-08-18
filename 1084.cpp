#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define i1e5 100000
#define i1e9 1000000000
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
  ll s = 0, n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n), b(m);

  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  ll A = 0, B = 0;
  while (A < n && B < m) {
    if (abs(a[A] - b[B]) <= k) {
      s++;
      A++;
      B++;
    }
    else if (a[A] < b[B]) A++;
    else B++;
  }

  cout << s << endl;

}

int main() {
  init_code();

  solve();

  return 0;
}