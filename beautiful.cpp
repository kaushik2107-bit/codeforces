#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int times;
  cin >> times;

  for (int i=0; i<times; ++i) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((c>=a && c<=b) || (a>=c && a<=d)) {
      cout << max(a, c) << endl;
    } else {
      cout << a + c << endl;
    }
  }
  return 0;
}
