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

  string t, i="", a="";
  int mi=0, ma=0;
  cin >> t;

  for (int j = 0; j < t.length(); j++) {
    if (t[j] >= 97) {
     mi++;
     i+=t[j];
     a+=t[j]-32;
    }
    else {
      ma++;
      i+=t[j]+32;
      a+=t[j];
    }
  }

  cout << (ma > mi ? a : i);

  return 0;
}