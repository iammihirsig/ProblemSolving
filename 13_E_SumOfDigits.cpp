/*
Goal: To find sum of digits of a number
NOTE: Extract digit and add


TC: O(log n)   // The number of digits is log₁₀(n), so we iterate O(log n) times
SC: O(1)       // Only a few variables are used, so constant space is needed

TC Explanation: The time complexity of calculating the sum of digits of a number is O(log(n)) where "n" is the number itself; essentially, it takes a constant amount of time per digit in the number, making the complexity directly proportional to the number of digits (which is logarithmic in the value of the number). Since dividing a number by 10 roughly halves its size (in terms of number of digits), the number of iterations required to reach zero is proportional to the logarithm of the input number (log(n)).

*/

#include <iostream>
using namespace std;

// function declaration
int digitSum(int num)
{
  int sum = 0, lastDigit = 0;
  while (num > 0)
  {
    lastDigit = num % 10;
    sum += lastDigit;
    num /= 10;
  }
  return sum;
}

int main()
{
  // take input: num
  int num;
  cin >> num;

  // call digitSum()
  int ans = digitSum(num);

  // print ans
  cout << "Digit Sum: " << ans << endl;

  return 0;
}
