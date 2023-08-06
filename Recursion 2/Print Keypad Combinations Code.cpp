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
