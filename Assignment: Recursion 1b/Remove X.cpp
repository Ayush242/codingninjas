// Given a string, compute recursively a new string where all 'x' chars have been removed.
// Input format :
// String S
// Output format :
// Modified String
// Constraints :
// 1 <= |S| <= 10^3
// where |S| represents the length of string S. 
// Sample Input 1 :
// xaxb
// Sample Output 1:
// ab
// Sample Input 2 :
// abc
// Sample Output 2:
// abc


/*
DRIVER SOLUTION
#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
*/




void removeX(char input[]) {

	if(input[0]=='\0') return;
  removeX(input+1);
  if(input[0] =='x'){
      for(int j =0; input[j]!='\0';j++ ){
          input[j] = input[j+1];
      }
  }
}


// EDITORIAL SOLUTION
/*
  Time Complexity : O(n^2)
  Space Complexity : O(n^2)
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
void removeX(char input[], int start)
{
  if (input[start] == '\0')
  {
    return;
  }
  removeX(input, start + 1);
  if (input[start] == 'x')
  {
    int len = length(input);
    int i;
    for (i = start + 1; i < len; i++)
    {
      input[i - 1] = input[i];
    }
    input[i - 1] = '\0';
  }
}
void removeX(char input[])
{
  removeX(input, 0);
}
