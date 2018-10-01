// WA
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> k(m);
  for (int i = 0; i < m; i++) {
    cin >> k[i];
  }
  sort(k.rbegin(), k.rend());
  int turn = 0;
  while (n > 0) {
    for (int i = 0; i < m; i++) {
      if (n - k[i] < 0) {
        continue;
      } else {
        n -= k[i];
        break;
      }
    }
    turn = !turn;
  }
  cout << turn + 1 << "\n";
  return 0;
}
