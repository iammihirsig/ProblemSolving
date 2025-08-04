// Print all divisors of a number

#include <iostream>
using namespace std;

// ==================== METHOD 1 ====================
void printAllDivisors_Method1(int inputNumber)
{
  // Time Complexity: O(N)
  // Space Complexity: O(1)

  // All divisors are between [1, inputNumber] So, just loop over and check
  for (int i = 1; i <= inputNumber; i++)
  {
    if (inputNumber % i == 0)
    {
      cout << i << " ";
    }
  }
  cout << endl;
}
// ==================================================

// ==================== METHOD 2 ====================
void printAllDivisors_Method2(int inputNumber)
{
  // Time Complexity: O(sqrt N)
  // Space Complexity: O(1)

  for (int i = 1; i * i <= inputNumber; i++)
  {
    if (inputNumber % i == 0)
    {
      cout << i << " ";
      if (inputNumber / i != i)
      {
        cout << inputNumber / i << " ";
      }
    }
  }
  cout << endl;
  // You can also sort, and the time complexity will change accordingly
}
// ==================================================

// ==================== MAIN FUNCTION ====================
int main()
{
  int inputNumber;
  cout << "Enter Input: ";
  cin >> inputNumber;
  printAllDivisors_Method1(inputNumber);
  printAllDivisors_Method2(inputNumber);

  return 0;
}
