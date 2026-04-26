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

void search(int d[], int n);

void solve() {
  int n;
  cin >> n;
  int route[n];
  for (int i = 0; i < n; i++) cin >> route[i];

  vector<int> path;
  int cur = n;
  while (cur != 1) {
    path.pb(cur);
    cur = route[cur-2];
  }
  path.pb(1);
  reverse(all(path));
  for (int x : path) cout << x << ' ';
}

int main() {
  init_code();
  solve();
  return 0;
}