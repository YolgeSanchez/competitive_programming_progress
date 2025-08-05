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

  int a, b;
  cin >> a >> b;

  int cnt = 0;
  while (a <= b) {
    a *= 3;
    b *= 2;
    cnt++;
  }

  cout << cnt << endl;
  
  return 0;
}