//  Given a string s, print all its subsequences

//Approach 1
// TIME COMPLEXITY : O(2^n)
#include<bits/stdc++.h>
using namespace std;

int subseq(string input, string output[]){
  if(input.empty()){
    output[0] ="";
    return 1;
  }
  int len = subseq(input.substr(1), output);
  for(int i=0;i<len;i++){
    output[i+len] = input[0] + output[i];
  }
  return 2*len;
}

int main(){
  string s;
  cin>>s;
  int len = pow(2,s.size());
  string *output = new string[len];
  int n = subseq(s,output);
  for(int i=0;i<n;i++){
    cout<<output[i]<<endl;
  }
}


// Approach 2
// TIME COMPLEXITY : O(2^n)

void subs(string input,string output){
  if(input.empty()){
    cout<<output<<endl;
    return;
  }
  subs(input.substr(1),output + input[0]);
  subs(input.substr(1),output);
}

int main(){
  string s,output;
  cin>>s;
  subs(s,output);
}
