#include <iostream>
#include <algorithm>
#include <iterator>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int times;
  cin >> times;

  for (int i=0; i<times; ++i) {
    int count;
    int tmp = 0;
    int check = 0;
    int check1 = 0;
    int check2 = 0;
    int a;
    cin >> a;
    int arr[a];
    for (int j=0; j<a; ++j) {
      cin >> arr[j];
    }

    int n = (sizeof(arr)/sizeof(arr[0]));
    sort(arr, arr + n);


    /*unordered_map<int, int> mp;

    for (int j=0; j<n; ++j) {
      mp[arr[j]]++;
    }
    if (mp.find(0) == mp.end()) {
      for(auto x: mp) {
        if (x.second != 1) {
          tmp++;
          check1 = 1;
          break;
        } else {
          check = 1;
          break;
        }
      }
    } else {
      for (auto x : mp) {
        if (x.first == 0) {
          cout << a - x.second << endl;
          break;
        }
      }
    }
    if (check =1) {
      cout << a + 1 << endl;
    }
    if (check1 = 1) {
      cout << a << endl;
    }*/



    for (int m=0; m<a; ++m) {


      if (arr[m] == 0) {
        check = 1;
        tmp++;

      }
      if (arr[m] == arr[m+1] != 0) {
        check1 = 1;

      }


    }
    if ( check == 1) {
      cout << a - tmp << endl;
    }
    else if (check1 == 1) {
      cout << a << endl;
    } else if (tmp == 0 & check1 == 0) {
      cout << a + 1 << endl;
    }
  }

  return 0;
}
