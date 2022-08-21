#include <iostream>

using namespace std;

int main() {
  int a, b, r;

  cout << "Enter the numbers (separated by space): ";
  cin >> a;
  cin >> b;

  if (a == b) {
    cout << "GCD is " << a;
    return 0;
  }

  int small = a, big = b;

  if (b > a) {
    small = a;
    big = b;
  }

  do {
    r = big % small;
    if (r == 0)
      cout << "GCD is " << small;
    big = small;
    small = r;
  } while (r != 0);

  return 0;
}
