// Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
// Note : The order of strings are not important. Just print different strings in new lines.
// Input Format : Integer n
// Output Format : All possible strings in different lines
// Constraints :
//   1 <= n <= 10^6
// Sample Input:
//   23
// Sample Output:
//     ad
//     ae
//     af
//     bd
//     be
//     bf
//     cd
//     ce
//     cf

// Time Complexity: O(4^n), where n is a number of digits in the input number. Each digit of a number has 3 or 4 alphabets, thus it can be said that each 
// digit has 4 alphabets asoptions. If there are n digits then there are 4 options for the first digit and for each alphabet of the first digit there are 
// 4 options in the second digit, i.e for every recursion 4 more recursions are called (if it does not match the base case). Therefore the time complexity 
// is O(4^n).

#include <bits/stdc++.h>
using namespace std;

string getString(int num){
    string letters[]= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    return letters[num];
}
void printKeypad(int num, string output){
    if(num ==0){
        cout<<output<<endl;
        return;
    }
    string ans = getString(num%10);
    for(char c: ans){
        printKeypad(num/10, c + output);
    }
}

void printKeypad(int num){
    printKeypad(num,"");
}
