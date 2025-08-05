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
}

int main() {
  init_code();

  int t, p=0;
  cin >> t;
  while (t--) {
    int a,b,c;
    cin >> a >> b >> c;
    if (a+b+c > 1) p++;
  };

  cout << p << endl;

  return 0;
}