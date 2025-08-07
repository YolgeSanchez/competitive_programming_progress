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
  int length;
  cin >> length;

  int longest = 0, actual = 0, last = -1;
  for (int i = 0; i < length; i++) {
    int tmp;
    cin >> tmp;

    actual += tmp > last;

    longest = max(longest, actual);

    actual = tmp > last ? actual : 1;
    last = tmp;
  }

  cout << longest << endl;
}

int main() {
  init_code();

  solve();

  return 0;
}