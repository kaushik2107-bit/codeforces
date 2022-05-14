#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
  int size;
  cin >> size;
  int ans = 0;
  int queries;
  cin >> queries;
  int arr[size];
  for (int i=0; i<size; ++i) {
    cin >> arr[i];
  }
  for (int j=0; j<size; ++j) {
    ans+= arr[j];
  }
  int a, b, c;
  for (int i=0; i<queries; ++i) {
    cin >> a;
    if (a==1) {
      cin >> b >> c;
      ans = ans + c - arr[b-1];
      arr[b-1] = c;
      /*for (int j=0; j<size; ++j) {
        ans+= arr[j];
      }*/

    }
    else if (a==2) {
      cin >> b;
      /*for (int j=0; j<size; ++j) {
        arr[j] = b;
      }*/
      //memset(arr, 0, sizeof(arr));
      fill(arr, arr+size, b);
      ans = b * size;
    }

    cout << ans << endl;
    //ans = 0;
  }

  return 0;
}
