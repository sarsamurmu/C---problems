#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int numbers[4] = {};
  int number;

  cout << "What is the number that you want to split: ";
  cin >> number;

  int remainder = number;
  int closest_root = floor(sqrt(remainder));
  numbers[0] = closest_root;
  remainder = remainder - pow(closest_root, 2);
  closest_root = floor(sqrt(remainder));
  numbers[1] = closest_root;
  remainder = remainder - pow(closest_root, 2);
  closest_root = floor(sqrt(remainder));
  numbers[2] = closest_root;
  remainder = remainder - pow(closest_root, 2);
  closest_root = floor(sqrt(remainder));
  numbers[3] = closest_root;
  remainder = remainder - pow(closest_root, 2);

  cout << number << " is sum of the square of these numbers: ";
  for (int i = 0; i < 4; ++i) {
    cout << numbers[i];
    if (i < 3) cout << ", ";
  }

  return 0;
}
