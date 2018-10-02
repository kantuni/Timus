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
  vector<int> wl(n + 1);
  wl[0] = 1;
  for (int i = 1; i < n + 1; i++) {
    bool win = false;
    for (int j = 0; j < m; j++) {
      if (i - k[j] < 0) {
        break;
      } else if (wl[i - k[j]] == 0) {
        win = true;
        break;
      }
    }
    wl[i] = win;
  }
  if (wl[n] == 1) {
    cout << 1 << "\n";
  } else {
    cout << 2 << "\n";
  }
  return 0;
}
