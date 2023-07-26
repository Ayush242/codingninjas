// Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
// Return empty string for numbers 0 and 1.
// Note :
// 1. The order of strings are not important.
// 2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.
// Input Format :
// Integer n
// Output Format :
// All possible strings in different lines
// Constraints :
// 1 <= n <= 10^6
// Sample Input:
// 23
// Sample Output:
// ad
// ae
// af
// bd
// be
// bf
// cd
// ce
// cf

#include <string>
using namespace std;
string chars(int num){
	string arr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	return arr[num];
}

int keypad(int  input,string output[]){

	if(input == 0){
		output[0] ="";
		return 1;
	}

	int outSize = keypad(input/10, output);
	int ans = input%10;
	int k=0;
	string str = chars(ans);
	string arr[outSize];
	for(int i=0;i<outSize;i++){
		arr[i] =output[i];
	}
	for(int i=0;i<str.length();i++){
		for(int j=0;j<outSize;j++){
			output[k++] = arr[j] + str[i] ;
		}
	} 
	return k;

}
