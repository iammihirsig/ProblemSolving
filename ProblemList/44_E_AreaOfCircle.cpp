/*
Goal: Calculate the area of a circle given it's radius
NOTE:

TC: O(1)
SC: O(1)
*/

#include <iostream>
#include <iomanip> // for setprecision()
using namespace std;

int main()
{
  float radius, area;
  cin >> radius;

  cout << "Area: " << (3.141592 * radius * radius) << endl;

  // use fixed and setprecision() to limit the value after decimal
  cout << fixed << setprecision(2) << (3.141592 * radius * radius) << endl;

  return 0;
}
