/*
Author : Mihir Raj Singh
Title : Type Of Triangles
Date & Time : 2025-04-03 11:09:21
*/

#include <iostream>
using namespace std;

// Function definition and declaration starts

// Function definition and declaration ends

int main() {
  int side1, side2, side3;

  /* Input sides of a triangle */
  cout << "Enter three sides of triangle: " << endl;
  cin >> side1 >> side2 >> side3;

  if (side1 == side2 && side2 == side3) {
    cout << "Equilateral triangle"; /* If all sides are equal */
  } else if (side1 == side2 || side1 == side3 || side2 == side3) {
    cout << "Isosceles triangle"; /* If any two sides are equal */
  } else {
    cout << "Scalene triangle"; /* If none sides are equal */
  }

  return 0;
}
