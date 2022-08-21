#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int numbers[4] = {};
  int number;

  cout << "What is the number that you want to split: ";
  cin >> number;

  int remainder = number;

  for (int i = 0; i < 4; ++i) {
    int closest_root = floor(sqrt(remainder));
    numbers[i] = closest_root;
    remainder = remainder - pow(closest_root, 2);
  }

  cout << number << " is sum of the square of these numbers: ";
  for (int i = 0; i < 4; ++i) {
    cout << numbers[i];
    if (i < 3) cout << ", ";
  }

  return 0;
}
