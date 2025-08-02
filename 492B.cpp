#include <bits/stdc++.h>
using namespace std;
#define enld "\n"

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, l, m=0, a[100500];
  cin >> n >> l;

  for (int i=0; i<n; i++) cin >> a[i];
  sort(a, a+n);
  m = 2*max(a[0], l-a[n-1]);

  for (int i=0; i<n-1; i++) 
    m = max(m, a[i+1] - a[i]);  

  cout << fixed << setprecision(10) << (float) m/2 << endl;

  return 0;
}