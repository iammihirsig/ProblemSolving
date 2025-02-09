/*
Goal: To find the greatest no among three.
NOTE: Two methods are discussed.

Both Methods (But 2nd one is efficient and clean)
  TC: O(1)
  SC: O(1)
*/

#include <iostream>
using namespace std;

// function declaration
int greatestOf3_method2(int num1, int num2, int num3)
{
  return max(num1, max(num2, num3));
}

int greatestOf3_method1(int num1, int num2, int num3)
{
  if (num1 >= num2 && num1 >= num3)
  {
    return num1;
  }
  else if (num2 >= num1 && num2 >= num3)
  {
    return num2;
  }
  return num3;
}

int main()
{
  // take inputs: num1, num2, num3
  int num1, num2, num3;
  cin >> num1 >> num2 >> num3;

  // call greatestOf3_method1()
  int ans = greatestOf3_method1(num1, num2, num3);
  cout << "Greatest no using method1 is: " << ans << endl;

  // call greatestOf3_method2()
  ans = greatestOf3_method2(num1, num2, num3);
  cout << "Greatest no using method2 is: " << ans << endl;

  return 0;
}
