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
  int n, m;
  string a, b, c;
  cin >> n >> a >> m >> b >> c;
  deque<char> h(a.begin(), a.end());

  // dima push back
  // vlad push front
  for (int i = 0; i < m; i++) {
    if (c[i] == 'V') h.push_front(b[i]);
    else h.push_back(b[i]);
  }

  for (int i = 0; i < n + m; i++) {
    cout << h[i];
  }
  cout << endl;
}

int main() {
  init_code();

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}