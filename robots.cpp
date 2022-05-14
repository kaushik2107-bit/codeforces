#include <iostream>
using namespace std;
int main() {
  int times, fuck = 1;
  cin >> times;

  for(int i=0; i<times; ++i) {
    int a, b;
    cin >> a >> b;
    char arr[a][b];
    for (int i =0; i<a; ++i) {
      for (int j=0; j<b; ++j) {
        cin >> arr[i][j];
      }
    }

    int c1, c2, d1, d2;
    c1 = -1;
    c2 = -1;
    d1 = -1;
    d2 = -1;
    for (int i=0; i<a; ++i) {
      for (int j=0; j<b; ++j) {
        if (arr[i][j] == 'R') {
            c1 = i;
            c2 = j;
            break;
        }
      }
      if (c1 != -1) {
        break;
      }
    }
    for (int j=0; j<b; ++j) {
      for (int i=0; i<a; ++i) {
        if (arr[i][j] == 'R') {
            d1 = i;
            d2 = j;
            break;
        }
        }

      if (d1 != -1) {
        break;
      }
    }
    //cout << c1 <<' ' << c2 << ' ' << d1 << ' ' << d2 << endl;

    if (c1 == d1 && c2 == d2 ) {
      cout << "YES" <<endl;

    } else{
      cout << "NO" << endl;
    }


  }

  return 0;
}
