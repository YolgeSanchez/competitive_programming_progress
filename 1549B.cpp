#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
using namespace std;
 
void init_code() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
 
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
 
void solve() {
  int size, possible = 0;
  string enemy, pawn;
  cin >> size >> enemy >> pawn;
 
  for (int i = 0; i < size; i++) {
    if (pawn[i] == '1') {
      if (enemy[i] == '0') {
        possible++;
        continue;
      }
 
      if (i == 0) if (enemy[i+1] == '1') {
        possible++;
        enemy[i+1] = '0';
        continue;
      }
      else if (i == size - 1) if (enemy[i-1] == '1') {
        possible++;
        continue;
      }
 
      if (enemy[i-1] == '1') {
        possible++;
        continue;
      }
      else if (enemy[i+1] == '1') {
        possible++;
        enemy[i+1] = '0';
      }
    }
  }
 
  cout << possible << endl;
}
 
int main() {
  init_code();
 
  int t;
  cin >> t;
  while (t--) solve();
 
  return 0;
}