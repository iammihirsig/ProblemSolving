/*
Goal: To find if an input no is prime or not.
NOTE: Note that a prime no have only 2 factor (1 and itself).

TC: O(sqrt n)
SC: O(1)
*/

#include <iostream>
using namespace std;

bool isPrime(int num)
{
  if (num <= 1)
  {
    return false;
  }

  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }

  return true;
}

int main()
{
  int num;
  cin >> num;

  if (isPrime(num))
  {
    cout << "Prime." << endl;
  }
  else
  {
    cout << "Not Prime." << endl;
  }

  return 0;
}
