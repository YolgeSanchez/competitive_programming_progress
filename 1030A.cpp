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

  int n, s=0;
  cin >> n;

  while (n--) {
    int tmp;
    cin >> tmp;
    s+=tmp;
  }

  cout << (s > 0 ? "HARD" : "EASY");

  return 0;
}