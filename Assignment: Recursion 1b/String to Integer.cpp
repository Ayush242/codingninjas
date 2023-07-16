// Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
// Input format :
// Numeric string S (string, Eg. "1234")
// Output format :
// Corresponding integer N (int, Eg. 1234)
// Constraints :
// 0 < |S| <= 9
// where |S| represents length of string S.
// Sample Input 1 :
// 00001231
// Sample Output 1 :
// 1231
// Sample Input 2 :
// 12567
// Sample Output 2 :
// 12567


/*
DRIVER SOLUTION
#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
*/


#include<cstring>
#include<cmath>
int stringToNumber(char input[]) {

  int n = strlen(input);
  if(n==0) return 0;
	if(n == 1) 
    return input[n-1] - '0';
  int ans = stringToNumber(input + 1);
  int j = input[0] - '0';

  return j*pow(10,n-1) + ans;
}


/*
  Time Complexity : O(n)
  Space Complexity : O(n)
  where n is size of input array
*/
int length(char input[])
{
  int len = 0;
  for (int i = 0; input[i] != '\0'; i++)
  {
    len++;
  }
  return len;
}
int stringToNumber(char input[], int last)
{
  if (last == 0)
  {
    return input[last] - '0';
  }
  int smallAns = stringToNumber(input, last - 1);
  int a = input[last] - '0';
  return smallAns * 10 + a;
  }
int stringToNumber(char input[])
{
  int len = length(input);
  return stringToNumber(input, len - 1);
}
