#include <iostream>
using namespace std;
int main() {
  int size;
  cin >> size;

  int arr[size];

  for (int i =0; i<size; ++i) {
    cin >> arr[i];
  }

  int a;
  cin >> a;
  int tmp;
  for (int i =0; i <size-a ; ++i) {
    tmp = arr[i];
    arr[i] = arr[i+a];
    arr[i+a] = tmp;
  }
  for (int i =0; i<size; ++i) {
    cout << arr[i] << " ";
  }

    return 0;
}
