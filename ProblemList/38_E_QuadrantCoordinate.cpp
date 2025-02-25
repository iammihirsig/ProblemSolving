/*
Goal: To find where the point lies in quadrant using point coordinates
NOTE:

TC: O(1)
SC: O(1)
*/

#include <iostream>
using namespace std;

// function declaration and definition starts
void findQuadrant(int x, int y)
{
  if (x > 0 && y > 0)
  {
    cout << "First Quadrant." << endl;
  }
  else if (x < 0 && y > 0)
  {
    cout << "Second Quadrant." << endl;
  }
  else if (x < 0 && y < 0)
  {
    cout << "Third Quadrant." << endl;
  }
  else if (x > 0 && y < 0)
  {
    cout << "Fourth Quadrant." << endl;
  }
  else if (x == 0 && y == 0)
  {
    cout << "Origin." << endl;
  }
  else if (x != 0 && y == 0)
  {
    cout << "X-Axis." << endl;
  }
  else if (x == 0 && y != 0)
  {
    cout << "Y-Axis." << endl;
  }
}

// function declaration and definition ends

int main()
{
  int x, y;
  cin >> x >> y;

  // call function
  findQuadrant(x, y);

  return 0;
}
