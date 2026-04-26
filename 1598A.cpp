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
  int cols;
  cin >> cols;

  vector<vector<int>> explored(2, vector<int>(cols, -1));
  string grid[2];
  cin >> grid[0] >> grid[1];

  queue<pair<int, int>> explore; 
  int dx[] = {1, 0, 0, 1, 1};
  int dy[] = {0, -1, 1, -1, 1};

  explore.push({0, 0});
  explored[0][0] = 1;

  while (!explore.empty()) {
    auto node = explore.front();
    int x = node.first, y = node.second;
    explore.pop();

    for (int move = 0; move < 5; move++) {
      int nx = dy[move] + x, ny = dx[move] + y;
      if ((nx == 0 || nx == 1) && ny >= 0 && ny < cols && explored[nx][ny] == -1 && grid[nx][ny] == '0') {
        explore.push({nx, ny});
        explored[nx][ny] = 1;
      }
    }
  }

  cout << (explored[1][cols-1] == -1 ? "NO" : "YES") << endl;
}

int main() {
  init_code();

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}