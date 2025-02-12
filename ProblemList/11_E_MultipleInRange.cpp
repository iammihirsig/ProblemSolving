/*
Goal: To find all the multiples of a given number in a range

TC: O((end - start) / num)
SC: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

// function declaration
void findFactorsInRange(int num, int start, int end, vector<int> &result)
{
  // Step 1: Find the first multiple of num in the given range
  int firstMultiple = ((start + num - 1) / num) * num; // Equivalent to ceil(start / num) * num

  // Step 2: Iterate and collect all multiples in the range
  for (int i = firstMultiple; i <= end; i += num)
  {
    result.push_back(i);
  }
}

int main()
{
  // take input: num, start, end
  int num, start, end;
  cin >> num >> start >> end;

  // create result vector
  vector<int> result;

  // call findFactorsInRange()
  findFactorsInRange(num, start, end, result);

  // Output the factors
  for (int factor : result)
  {
    cout << factor << " ";
  }
  cout << endl;

  return 0;
}
