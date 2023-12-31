// Given the number 'n', write a code to print numbers from 1 to n in increasing order recursively.
// Input Format :
// Integer n
// Output Format :
// Numbers from 1 to n (separated by space)
// Constraints :
// 1 <= n <= 10000
// Sample Input 1 :
//  6
// Sample Output 1 :
// 1 2 3 4 5 6
// Sample Input 2 :
//  4
// Sample Output 2 :
// 1 2 3 4

// DRIVER SOLUTION
// #include<iostream>
// using namespace std;
// #include "Solution.h"

// int main(){
//     int n;
//     cin >> n;
  
//     print(n);
// }


/*
  Time Complexity : O(n)
  Space Complexity : O(n)
*/
void print(int n){
    //write your code here
    
    if(n==0) {
        return;
    }
    print(n-1);
    cout<<n<<" ";
}
