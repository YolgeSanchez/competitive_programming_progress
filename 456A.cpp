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
  int n, mq=0, mp=0;
  cin >> n;
  pair<int, int> l[n];

  for (int i = 0; i < n; i++) { 
    cin >> l[i].first >> l[i].second;

    if (l[i].first == l[i].second) {
      if (i == 0) mq++, mp++;
      continue;
    };

    mp = l[i].first > l[mp].first ? i : mp;
    mq = l[i].second > l[mq].second ? i : mq;
  } 

  if (mq == mp) {
    cout << "Poor Alex" << endl;
    return;
  } else cout << "Happy Alex" << endl;

}

int main() {
  init_code();

  solve();

  return 0;
}