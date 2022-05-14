#include <iostream>

using namespace std;

int main() {
  int times;
  cin >> times;

  for (int i=0; i<times; ++i) {
      long long int a;
      cin >> a;

      if (a%2 != 0 || a< 4) {
        cout << -1 << endl;
      } else if (a == 4) {
        cout << 1 << " "<< 1 << endl;
      }
      else if (a%6 == 0 && a%4 == 0) {
        cout << a/6 << " " << a/4 << endl;
      } else if (a%6 == 0 && a%4 == 2){
        cout << a/6 << " " << a/4 << endl;
      } else if (a%6 == 2 && a%4 == 0) {
        cout <<(a/6) + 1 << " " << a/4 << endl;
      } else if (a%6 == 2 && a%4 == 2) {
        cout << a/6 + 1 << " " << a/4 << endl;
      } else if (a%6 == 4 && a%4 ==0) {
        cout << a/6 + 1 << " " << a/4 << endl;
      } else if (a%6 == 4 && a%4 == 2) {
        cout << a/6 + 1 << " " << a/4 << endl;
      }
  }
  return 0;
}
