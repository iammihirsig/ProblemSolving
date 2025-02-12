/*
Goal: To find all armstrong no in a given range.
NOTE:


TC: O(N⋅log n⋅log log n)
SC: O(1)

Step 1: Understanding the `pow(a, b)` Function
The standard `pow(a, b)` function computes: a^b = a × a × a × ... × a  (b times)

Brute Force: O(b)
  - A naive implementation would take O(b) time because it performs `b` multiplications.

Optimized Approach: Exponentiation by Squaring (O(log b))
  - If `b` is even:  a^b = (a^(b/2)) × (a^(b/2))
  - If `b` is odd:   a^b = a × (a^((b-1)/2)) × (a^((b-1)/2))
  - Each step halves the exponent, leading to O(log b) complexity.

Step 2: Applying This to `pow(lastDigit, order)`
In the Armstrong number problem, we compute: pow(lastDigit, order)

where:
  - `lastDigit` is a single digit (0-9), so it's constant O(1).
  - `order` is the number of digits in `num`, which is O(log n).

Thus, the time complexity of `pow(lastDigit, order)` using exponentiation by squaring is:
  O(log order)

Step 3: Expressing `order` in Terms of `n`
The number of digits in `num` is given by:
  order = ⌊log_10(n)⌋ + 1

which is O(log n) (ignoring constants).

Thus, replacing `order` in the exponentiation time complexity: O(log order) = O(log (log n))

Final Complexity Analysis for Armstrong Number in a Range:
1. Finding the number of digits (`order`) → O(log n)
2. Computing `pow(lastDigit, order)` for each digit → O(log log n)
3. Looping over numbers in the range `[start, end]` → O(N)

Final Time Complexity:
    O(N ⋅ log n ⋅ log log n)


*/
#include <iostream>
#include <math.h>
using namespace std;

// function declaration
int findOrder(int num)
{
  int count = 0;
  while (num > 0)
  {
    count++;
    num /= 10;
  }
  return count;
}

bool isArmstrong(int num)
{
  int order = findOrder(num);
  int lastDigit = 0, sum = 0, temp = num;
  while (temp > 0)
  {
    lastDigit = temp % 10;
    sum += pow(lastDigit, order);
    temp /= 10;
  }
  return (sum == num);
}

// main code
int main()
{
  // take input
  int start, end;
  cin >> start >> end;

  for (int i = start; i <= end; i++)
  {
    if (isArmstrong(i))
    {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}
