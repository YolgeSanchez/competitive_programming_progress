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
  int n; 
  cin >> n;
  int s = 0, t = n;

  for (int i = 0; i < n-1; i++) {
    int tmp;
    cin >> tmp;
    s += tmp;
    t += i + 1;
  }

  cout << t - s << endl;
}

int main() {
  init_code();

  solve();

  return 0;
}