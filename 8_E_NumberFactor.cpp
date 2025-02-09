/*
Goal: To find all the factors of an input number.
NOTE: The idea is to limit the iteration to the square root of num and check in repeated pattern for factor.
And one more important thing is that (num / i != i) is there to prevent the repetition of a single factor in case if the num is a perfect square.

TC Analysis:
- Finding Factors: O(sqrt(n))
  - The loop runs up to sqrt(n), and each valid divisor is added to the list.
- Sorting the Factors: O(k log k)
  - Where k is the number of factors.
  - In the worst case, k ≈ O(sqrt(n)), so sorting takes O(sqrt(n) log sqrt(n)).
  - Since sorting a list of k elements takes O(k log k) time, we substitute k ≈ O(sqrt(n)), leading to:
    O(k log k) = O(sqrt(n) log sqrt(n))
  - Using logarithm properties: log(sqrt(n)) = (1/2) log(n), we rewrite:
    O(sqrt(n) log sqrt(n)) = O(sqrt(n) log n)
*/

#include <iostream>
#include <vector>    // for vector
#include <algorithm> // for sort
using namespace std;

// function declaration
vector<int> findFactors(int num)
{
  // creating factorList to store all the factors
  vector<int> factorList;

  // factor check and if true then push factor to factorList
  for (int i = 1; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      factorList.push_back(i);
      if (num / i != i)
      {
        factorList.push_back(num / i);
      }
    }
  }

  // sort the factorList (time complexity: O(sqrt(n) log n))
  sort(factorList.begin(), factorList.end());

  return factorList;
}

int main()
{
  // take input: num
  int num;
  cin >> num;

  // call findFactors() (space complexity: O(n))
  vector<int> answerList = findFactors(num);

  // print answerList (time complexity: O(n))
  for (auto i : answerList)
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
