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
  string n;  
  int sum = 1;
  cin >> n;

  for (int i = 1; i < n.length(); i++) {
    if (n[i] == n[i-1]) sum++;
    else sum = 1;
// 
    if (sum == 7) {
      cout << "YES";
      return;
    }
  }

  cout << "NO";

}

int main() {
  init_code();

  solve();

  return 0;
}