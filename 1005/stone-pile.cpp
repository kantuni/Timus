#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }
  int ans = -1;
  for (int i = 0; i < pow(2, n); i++) {
    bitset<20> bits(i);
    int l = 0, r = 0;
    for (int j = n - 1; j > -1; j--) {
      if (bits[j] == 0) {
        l += w[n - 1 - j];
      } else {
        r += w[n - 1 - j];
      }
    }
    ans = (ans == -1) ? abs(r - l) : min(ans, abs(r - l));
  }
  cout << ans << endl;
  return 0;
}
