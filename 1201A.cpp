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
  int students, questions, max = 0;
  cin >> students >> questions;
  string ans[students];
  int points[questions];

  for (int i = 0; i < students; i++) cin >> ans[i];
  for (int i = 0; i < questions; i++) cin >> points[i];

  for (int i = 0; i < questions; i++) {
    map<char, int> freq;
    for (int j = 0; j < students; j++) {
      freq[ans[j][i]] = freq.count(ans[j][i]) ? freq[ans[j][i]]+1 : 1;
    }

    auto it = *max_element(
    freq.begin(), freq.end(),
    [](const auto &a, const auto &b) {
        return a.second < b.second;
    });

    max += it.second * points[i];
  }

  cout << max << endl;

}

int main() {
  init_code();

  solve();

  return 0;
}