#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;

  for (int i=0; i < num; ++i) {
    long int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;


    if (a+b+c >= x+y) {
      if ((a >= x) && (b >= y)) {
        //cout << "1" << endl;
        cout << "YES" << endl;
      } else if ((a < x) && (b >= y)) {
        //cout << "2" << endl;
        if ((x-a) <= c) {
          cout << "YES" << endl;
        } else {
          cout << "NO" << endl;
        }
      } else if ((a >= x) && (b < y)) {
        //cout << "3" << endl;
        if ((y-b) <= c) {
          cout << "YES" << endl;
        } else {
          cout << "NO" << endl;
        }
      } else if ((a < x) && (b < y)) {
        //cout << "4" << endl;
        if ((x-a + y-b) <= c) {
          cout << "YES" << endl;
        } else {
          cout << "NO" << endl;
        }
      }
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
