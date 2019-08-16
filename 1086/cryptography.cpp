#include <bits/stdc++.h>
#define MAXN 15005
using namespace std;

bool prime(int n) {
  for (int i = 2; i < sqrt(n) + 1; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  vector<int> primes;
  int cnt = 0, cur = 2;
  while (cnt < MAXN) {
    while (!prime(cur)) {
      cur++;
    }
    primes.push_back(cur);
    cnt++, cur++;
  }
  int k;
  cin >> k;
  while (k--) {
    int n;
    cin >> n;
    cout << primes[n - 1] << endl;
  }
  return 0;
}
