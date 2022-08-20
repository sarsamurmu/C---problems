#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
  float a,b,c;

  cout << "Enter the values of a, b, c (separated by a space) ";
  scanf("%f %f %f", &a, &b, &c);

  cout << "a = " << a << "; b = " << b << "; c = " << c << endl;

  float determinant = sqrtf(pow(b, 2) - 4 * a * c);

  if (determinant < 0) {
    cout << "The solutions of x are imaginary" << endl;
    return 0;
  }

  float sol_1 = (-b + determinant) / (2 * a);
  float sol_2 = (-b - determinant) / (2 * a);

  cout << "The solutions are x = " << sol_1 << ", x = " << sol_2 << endl;

  return 0;
}
