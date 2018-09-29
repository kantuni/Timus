#include <bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;

int main() {
  double a, r;
  cin >> a >> r;
  double ans = 0;
  if (r > a / 2) {
    double y = a / 2;
    double x = sqrt(r * r - y * y);
    double alpha = atan(x / y);
    double sec = r * r * alpha;
    double triag = x * y;
    double seg = sec - triag;
    double diag = a * sqrt(2) / 2;
    if (r > diag) {
      ans = a * a;
    } else {
      ans = r * r * PI - 4 * seg;
    }
  } else {
    ans = r * r * PI;
  }
  cout << fixed << setprecision(3);
  cout << ans << "\n";
  return 0;
}
