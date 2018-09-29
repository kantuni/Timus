#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
  if (n < 2) {
    return false;
  }
  for (int i = 2; i <= sqrt(1. * n); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  vector<int> primes;
  int cnt = 0, maxn = 15005;
  int curr = 1;
  while (cnt < maxn) {
    do {
      curr++;
    } while (!prime(curr));
    primes.push_back(curr);
    cnt++;
  }
  int k;
  cin >> k;
  while (k--) {
    int n;
    cin >> n;
    cout << primes[n - 1] << "\n";
  }
  return 0;
}
