#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int query;
  cin >> query;
  for (int x=0; x<query; ++x){

    int size;
    cin >> size;
    int count = 0;


    float arr[size];
    for (int i = 0; i<size; ++i) {
      cin >> arr[i];
    }


    for (int i=(size-1); i>0; --i) {
      while (arr[i-1] >= arr[i]) {
        arr[i-1] = floor(arr[i-1]/2);
        if (arr[i-1] == 0 && arr[i] == 0) {
          break;
        }
        count = count +1;
      }
    }
    for (int j =0; j < size; ++j) {
      if (arr[j] == arr[j+1] ) {
        cout << -1 << endl;
        break;
      } else {
        cout << count << endl;
        break;
      }
    }
  }

  return 0;
}
