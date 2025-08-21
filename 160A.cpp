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
  int n, a[100], s = 0;
  cin >> n;

  if (n == 1) {
    cout << 1;
    return;
  }

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    s += a[i];
  } 

  sort(a, a+n, greater<int>());

  int l = a[0], r = s - a[0], i = 1;
  while (l <= r) {
    l += a[i];
    r -= a[i];
    i++;
  }

  cout << i << endl;
}

int main() {
  init_code();

  solve();

  return 0;
}