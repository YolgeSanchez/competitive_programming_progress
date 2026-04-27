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
  int r, c;
  cin >> r >> c;

  vector<vector<char>> grid(r, vector<char>(c, '.'));
  vector<vector<int>> explored(r, vector<int>(c, -1));
  queue<pair<int, int>> wolves;
  int dx[] = {-1, 1, 0, 0};
  int dy[] = {0, 0, -1, 1};

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> grid[i][j];
      if (grid[i][j] == '.') grid[i][j] = 'D';
      if (grid[i][j] == 'W') wolves.push({i, j});
    }
  }

  int found = 0;

  while (!wolves.empty()) {
    if (found > 0) break;
    auto [x, y] = wolves.front();
    wolves.pop();

    for (int move = 0; move < 4; move++) {
      int nx = dy[move] + x, ny = dx[move] + y;

      if (nx >= 0 && nx < r && ny >= 0 && ny < c && grid[nx][ny] == 'S') {
        found++;
        break;
      }
    }
  }

  if (found == 0) {
    cout << "Yes";
    for (int i = 0; i < r; i++) {
      cout << endl;
      for (int j = 0; j < c; j++) {
        cout << grid[i][j];
      }
    }
  } else {
    cout << "No" << endl;
  }

}

int main() {
  init_code();
  solve();
  return 0;
}