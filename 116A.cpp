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

  int n, a[1000], b[1000], s=0, m = -1;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int a, b; 
    cin >> a >> b;
    s-=a;
    s+=b;
    m = max(s, m);
  }

  cout << m;

  return 0;
}