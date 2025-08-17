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
  string dna;
  cin >> dna;

  int left = 0, longest = 0;
  for (int right = 0; right < dna.length(); right++) {
    while (dna[left] != dna[right]) left++;

    longest = max(longest, right - left + 1);
  }

  cout << longest << endl;
}

int main() {
  init_code();

  solve();

  return 0;
}