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
  string ex;
  cin >> ex;
  cout << f(n, ex.size()) << endl;
  return 0;
}
