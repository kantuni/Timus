#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<long long> nums;
  long long num;
  while (cin >> num) {
    nums.push_back(num);
  }
  cout << fixed << setprecision(4);
  for (int i = nums.size() - 1; i > -1; i--) {
    cout << sqrt(nums[i]) << endl;
  }
  return 0;
}
