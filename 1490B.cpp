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
  int length, movements = 0, remaind[3] = {0,0,0};
  cin >> length;
  int nums[length];

  for (int i = 0; i < length; i++) {
    cin >> nums[i];
    ++remaind[nums[i]%3];
  }

  while (remaind[0] != remaind[1] || remaind[1] != remaind[2]) {
    if (remaind[1] > remaind[2]) {
      for (int i = 0; i < length; i++) {
        if (nums[i]%3 != 1) continue;

        ++nums[i];
        ++movements;
        --remaind[1];
        ++remaind[2];
        break;
      }
      continue;
    }

    if (remaind[2] > remaind[0]) {
      for (int i = 0; i < length; i++) {
        if (nums[i]%3 != 2) continue;

        ++nums[i]; 
        ++movements;
        --remaind[2];
        ++remaind[0];
        break;
      }
      continue;
    }

    if (remaind[0] > remaind[1]) {
      for (int i = 0; i < length; i++) {
        if (nums[i]%3 != 0) continue;

        ++nums[i];
        ++movements;
        --remaind[0];
        ++remaind[1];
        break;
      }
      continue;
    }

  }

  cout << movements << endl;

}

int main() {
  init_code();

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}



