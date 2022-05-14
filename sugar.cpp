#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int times;
  cin >> times;

  for (int i=0; i<times; ++i) {
    int a, b;
    cin >> a>> b;
    int arr[a];
    int sum_all = 0;
    for (int j=0; j<a; ++j) {
      cin >> arr[j];
      sum_all += arr[j];
    }
    sort(arr, arr+a);
    /*for (int j=0; j<a; ++j) {
      cout << arr[j] << ' ';
    }
    cout << "\n";*/
    for (int m=0; m<b; ++m) {
      int q;
      cin >> q;
      int sum=0;
      int sw = 0;
      int sw1 = 0;
      int count = 0;

        if (q > sum_all) {
          sw = 1;
        }
        else {
            int x = 0;
            if (x < a) {
              while (sum < q) {
                sum += arr[a-1-x];
                count++;
                ++x;
              }
            }

          sw1 = 1;
        }

      if (sw == 1) {
        cout << -1 << endl;
      }
      if (sw1 == 1) {
        cout << count << endl;
      }
    }
  }

  return 0;
}
