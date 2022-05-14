#include <iostream>
using namespace std;
int main() {
  int times;
  cin >> times;
  for (int i=0; i<times; ++i) {
    int a, b;
    cin >> a >> b;
    int arr[a][b];
    for (int j=0; j<a; ++j) {
      string s;
      cin >> s;
      char pi[b];

      for (int m=0; m<b; ++m) {
        pi[m] = s[m];

      }
      
    }
  }
  return 0;
}
