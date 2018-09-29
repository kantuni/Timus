#include <bits/stdc++.h>
using namespace std;

int f(int n, int k) {
  if (n == k) {
    return k;
  } else if (n < k) {
    return n;
  }
  return n * f(n - k, k);
}

int main() {
  int n;
  cin >> n;
  string exc;
  cin >> exc;
  int k = exc.size();
  cout << f(n, k) << "\n";
  return 0;
}
