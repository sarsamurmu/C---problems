#include <iostream>

using namespace std;

int main() {
  int numbers[20] = {6, 9, 19, 12, 17, 20, 4, 16, 1, 15, 5, 18, 10, 11, 13, 7, 14, 8, 3, 2};

  for (int i = 0; i < 20; i++) {
    int last = 20-i;
    for (int j = 0; j < last; j++) {
      if (numbers[j] > numbers[j+1]) {
        int a = numbers[j];
        numbers[j] = numbers[j+1];
        numbers[j+1] = a;
      }
    }
  }

  for (int i = 0; i < 20; ++i) {
    cout << numbers[i] << ",";
  }

  return 0;
}
