// Check whether a given String 'S' is a palindrome using recursion.


// Return true or false.


// Note:
// You don’t need to print anything. Just implement the given function.
// Example:
// Input: s = "racecar"
// Output: true
// Explanation: "racecar" is a palindrome.
// Input Format:
// The first and only line of the input contains string S.
// Output format:
// Return a boolean value True or False.
// Sample Input 1:
// abbba
// Sample Output 1:
// true
// Explanation Of Sample Input 1 :
// “abbba” is a palindrome
// Sample Input 2:
// abcd
// Sample Output 2:
// false
// Explanation Of Sample Input 2 :
// “abcd” is not a palindrome.
// Expected time complexity:
// Expected time complexity is O(n).
// Constraints:
// 0 <= |S| <= 10^6
// where |S| represents the length of string S.

/*
DRIVER SOLUTION
#include <algorithm>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <stack>
using namespace std;
#include "solution.h"

class Runner
{
    string t;

public:
    void takeInput()
    {
        cin>>t;
    }

    void execute()
    {
        auto ans = isPalindrome(t);
    }

    void executeAndPrintOutput()
    {
        auto ans = isPalindrome(t);
        ans ? cout<<"true" : cout<<"false";
    }
};

int main()
{
    // for (int i = 1; i <= 50; i++)
    // {
    //     string filename1 = "./Testcases/large/in/input" + to_string(i) + ".txt";
    //     string filename2 = "./Testcases/large/out/output" + to_string(i) + ".txt";
        
    //     ifstream inputFile(filename1);
    //     ofstream outputFile(filename2);
        
    //     if (inputFile.is_open() && outputFile.is_open())
    //     {
    //         cin.rdbuf(inputFile.rdbuf());   // Redirect cin to input file
    //         cout.rdbuf(outputFile.rdbuf()); // Redirect cout to output file
            
    //         Runner runner;
    //         runner.takeInput();
    //         runner.executeAndPrintOutput();
            
    //         cin.rdbuf(nullptr);   // Reset cin to standard input
    //         cout.rdbuf(nullptr);  // Reset cout to standard output
            
    //         inputFile.close();
    //         outputFile.close();
    //     }
    //     else
    //     {
    //         cerr << "Failed to open input or output file." << endl;
    //     }
    // }
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();
    return 0;
}
*/


#include<cstring>

bool compare(char input[], int start,int end){
    if(start >= end) return true;
    if(input[start]!= input[end]) return false;
    return compare(input, start + 1, end - 1);
}

bool checkPalindrome(char input[]) {

	int len = strlen (input);
  return compare(input, 0,len - 1);
}

