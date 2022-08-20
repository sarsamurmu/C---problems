#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
  int a,b,c;

  cout << "Enter the values of a, b, c (separated by a space) ";
  scanf("%d %d %d", &a, &b, &c);

  cout << "a = " << a << "; b = " << b << "; c = " << c << endl;

  double determinant = sqrt(pow(b, 2) - 4 * a * c);

  if (determinant < 0) {
    cout << "The solutions of x are imaginary" << endl;
    return 0;
  }

  double sol_1 = (-b + determinant) / 2 * a;
  double sol_2 = (-b - determinant) / 2 * a;

  cout << "The solutions are x = " << sol_1 << ", x = " << sol_2 << endl;

  return 0;
}
