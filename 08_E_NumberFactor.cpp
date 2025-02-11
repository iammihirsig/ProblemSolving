/*
Goal: To find all the factors of an input number.
NOTE: The idea is to limit the iteration to the square root of num and check in a repeated pattern for factors.
One important condition (num / i != i) prevents duplication in case num is a perfect square.

TC: O(√n log n)
SC: O(√n)

Explanation of Time Complexity:
1. Finding Factors (O(√n)):
  - We iterate only up to √n because every factor i has a corresponding factor num / i.
  - Each iteration adds at most 2 factors (i and num / i).
  - Hence, the number of factors is at most 2√n.

2. Sorting Factors (O(√n log n)):
  - The number of factors (k) is at most 2√n.
  - Sorting k elements takes O(k log k).
  - Substituting k = O(2√n): O(2√n log (2√n))
  - Since constants are ignored in Big-O notation, O(2√n) simplifies to O(√n).
  - Using the logarithmic property (log(2√n) = log 2 + log(√n))
  - we drop constants and get: O(√n log n)

3. Printing Factors (O(√n)):
   - We print at most 2√n factors, taking O(√n) time.
   - Since O(√n log n) dominates O(√n), printing doesn’t affect the final complexity.

Final Time Complexity: O(√n log n)

Explanation of Space Complexity:
- We store at most 2√n factors in a vector.
- Since constants are ignored in Big-O, O(2√n) simplifies to O(√n).
- If we avoid storing factors and print them directly, we can optimize space to O(1).

Final Space Complexity: O(√n)
*/

#include <iostream>
#include <vector>    // for vector
#include <algorithm> // for sort
using namespace std;

// function declaration
void findFactors(int num, vector<int> &answerList)
{
  // factor check and if true then push factor to answerList
  for (int i = 1; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      answerList.push_back(i);
      if (num / i != i)
      {
        answerList.push_back(num / i);
      }
    }
  }

  // sort the answerList (time complexity: O(sqrt(n) log n))
  sort(answerList.begin(), answerList.end());

  return;
}

int main()
{
  // take input: num
  int num;
  cin >> num;

  // creating answerList
  vector<int> answerList;

  // call findFactors()
  findFactors(num, answerList);

  // print answerList
  for (auto i : answerList)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
