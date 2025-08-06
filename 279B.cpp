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

  int totalBooks, freeTime;
  cin >> totalBooks >> freeTime;
  int bookTime[totalBooks];

  for (int i = 0; i < totalBooks; i++) {
    cin >> bookTime[i];
  }

  int longest = 0, left = 0, time = 0;
  for (int right = 0; right < totalBooks; right++) {
    time += bookTime[right];
    while (time > freeTime) {
      time -= bookTime[left];
      left++;
    }

    longest = max(longest, right - left + 1);
  }

  cout << longest << endl;

  return 0;
}