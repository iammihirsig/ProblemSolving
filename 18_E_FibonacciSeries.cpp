/*
Goal: To print fibonacci series upto n
NOTE:


TC: O(n)
SC: O(1)

*/
#include <iostream>
#include <math.h>
using namespace std;

// function declaration
void printFibo(int num)
{
  int a = 0, b = 1, result = 1;

  for (int i = 1; i <= num; i++)
  {
    cout << a << " ";
    result = a + b;
    a = b;
    b = result;
  }
}

// main code
int main()
{
  // take input
  int num;
  cin >> num;

  // call printFibo()
  printFibo(num);

  return 0;
}
