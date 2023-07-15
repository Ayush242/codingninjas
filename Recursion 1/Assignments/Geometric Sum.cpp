// Given k, find the geometric sum i.e.
// 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
// using recursion.
// Input format :
// Integer k
// Output format :
// Geometric sum (upto 5 decimal places)
// Constraints :
// 0 <= k <= 1000
// Sample Input 1 :
// 3
// Sample Output 1 :
// 1.87500
// Sample Input 2 :
// 4
// Sample Output 2 :
// 1.93750
// Explanation for Sample Input 1:
// 1+ 1/(2^1) + 1/(2^2) + 1/(2^3) = 1.87500

/*
DRIVER SOLUTION
#include <iostream>
#include <math.h>
#include <iomanip>
#include "solution.h"
using namespace std;

int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}
*/


double geometricSum(int k) {
    // Write your code here
	if(k == 0) return 1;
    float power = 1;
    for(int i =1;i<=k;i++)
        power*=2;
    double ans = geometricSum(k-1);
    return (1/power) + ans;
}

// EDITORIAL SOLUTION
/*
  Time Complexity : O(k)
  Space Complexity : O(k)
*/
double geometricSum(int k)
{
  if (k == 0)
  {
    return 1;
  }
  return (1 / pow(2, k)) + geometricSum(k - 1);
}
