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

ll chars, changes;
string str;

ll getMaxLenght(char target) {
  ll longest = 0, left = 0, changed = 0;

  for (ll right = 0; right < chars; right++) {
    if (str[right] != target) {
      changed++;
    }

    while (changed > changes) {
      if (str[left] != target) {
        changed--;
      }
      left++;
    } 

    longest = max(longest, right - left + 1);
  }
  
  return longest;
}

void solve() {
  cin >> chars >> changes >> str;

  ll maxA = getMaxLenght('a');
  ll maxB = getMaxLenght('b');

  cout << max(maxA, maxB);

}

int main() {
  init_code();

  solve();

  return 0;
}

/*
i can start by finding the longest equal subsequence of As or Bs
i have to change chars on a subsequence to find a larger one
but also have to keep track of how many times i changed

but how do i keep track of where i did the changes when sliding the window?
*/