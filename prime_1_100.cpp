#include <iostream>

using namespace std;

int main() {
  int until;

  cout << endl << "Determine all prime numbers until _ ";
  cin >> until;

  for (int i = 2; i <= until; i = i + 1) {
    bool is_prime = true;

    for (int j = 2; j < i; j = j + 1) {
      if (i % j == 0) {
        is_prime = false;
        break;
      }
    }

    if (is_prime) {
      cout << i << " is a prime number" << endl;
    }
  }

  return 0;
}
