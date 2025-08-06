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

  int n, k;
  cin >> n >> k;

  while (k--) {
    if (n%10 == 0) n/=10;
    else n-=1;
  }

  cout << n;

  return 0;
}