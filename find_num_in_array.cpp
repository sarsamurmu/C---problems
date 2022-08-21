#include <iostream>

using namespace std;

int main() {
  int arr[6] = {10, 5, 6, 1, 20, 19};
  int n;
  bool does_exist = false;
  
  cout << "Enter the number: ";
  cin >> n;

  for (int i = 0; i < 6; i++) {
    if (arr[i] == n) {
      does_exist = true;
      break;
    }
  }

  if (does_exist) {
    cout << "The number exists";
  } else {
    cout << "The number does not exist";
  }
}
