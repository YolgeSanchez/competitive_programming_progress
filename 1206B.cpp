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

  ll n, curr, zer=0, neg=0, t=0;
  cin >> n;


  for (int i = 0; i < n; i++) {
    cin >> curr;
    if (curr==0) {
      zer++;
      continue;
    }
    if (curr<0) neg++;
    t+=abs(curr)-1;
  }

  if (zer>0) {
    t+=zer;
  } else {
    t+=neg%2 * 2;
  }

  cout << t << endl;
  

  return 0;
}