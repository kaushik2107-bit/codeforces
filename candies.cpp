#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int  main() {
  int times;
  cin >> times;

  for (int i=0; i<times; ++i) {
    int size;
    cin >> size;

    int arr[size];
    for (int j=0; j<size; ++j) {
      cin >> arr[j];
    }
    sort(arr, arr + size);

    int min = arr[0];
    int sum = 0;
    for (int m=0; m<size; ++m) {
      sum = sum  + arr[m] - min;
    }
    cout << sum << endl;
  }
  return 0;
}
