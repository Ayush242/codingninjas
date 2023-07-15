// Count Zeros
// Send Feedback
// Given an integer N, count and return the number of zeros that are present in the given integer using recursion.
// Input Format :
// Integer N
// Output Format :
// Number of zeros in N
// Constraints :
// 0 <= N <= 10^9
// Sample Input 1 :
// 0
// Sample Output 1 :
// 1
// Sample Input 2 :
// 00010204
// Sample Output 2 :
// 2
// Explanation for Sample Output 2 :
// Even though "00010204" has 5 zeros, the output would still be 2 because when you convert it to an integer, it becomes 10204.
// Sample Input 3 :
// 708000
// Sample Output 3 :
// 4

/*
DRIVER SOLUTION
#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
*/


int countZeros(int n) {

	if(n == 0) return 1;
    if(n<10) return 0;
    int ans = countZeros(n/10);
    if(n % 10 == 0)
        return ans + 1;
    else
        return ans;
}

// EDITORIAL SOLUTION
/*
  Time Complexity : O(log(n))
  Space Complexity : O(log(n))
*/
int countZeros(int n)
{
  if (n <= 9)
  {
    if (n == 0)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  int last = n % 10;
  int count = 0;
  if (last == 0)
  {
  count = 1;
  }
  return count + countZeros(n / 10);
}
