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

int main() {
  init_code();

  int n, x=0, y=0, z=0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    x+=a;
    y+=b;
    z+=c;
  }

  cout << ( x==0 && y==0 && z==0 ? "YES" : "NO" );

  return 0;
}