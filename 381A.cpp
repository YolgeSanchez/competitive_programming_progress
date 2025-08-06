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

  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int l = 0, r = n - 1, s = 0, d = 0, t = 0;
  while (t < n) {
    if (a[l] > a[r]) {
      s+= a[l] * (t%2==0);
      d+= a[l] * (t%2!=0);
      l++;
    } else {
      s+= a[r] * (t%2==0);
      d+= a[r] * (t%2!=0);
      r--;
    }
    t++;
  }
  
  cout << s << " " << d << endl;
  return 0;
}