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
  int problems, time, maxTime = 4 * 60; 
  cin >> problems >> time;
  maxTime -= time;

  int left = 0, right = problems, result = 0;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (maxTime - ((mid * (5 + (5 * mid)))/2) < 0) {
      right = mid - 1;
    } else {
      result = mid;
      left = mid + 1;
    }
  }

  cout << result << endl;
}

int main() {
  init_code();

  solve();

  return 0;
}