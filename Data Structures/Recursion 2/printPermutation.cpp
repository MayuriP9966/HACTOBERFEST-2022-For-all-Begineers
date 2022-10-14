/*Problem Statement:  Print Permutations
Problem Level: MEDIUM
Problem Description:
Given an input string (STR), find and return all possible permutations of the input string.
Note:
The input string may contain the same characters, so there will also be the same permutations.
The order of permutations doesnâ€™t matter.

Input Format:
The only input line contains a string (STR) of alphabets in lower case

Output Format:
Print each permutations in a new line

Note:
You do not need to print anything, it has already been taken care of. Just implement the function.

Constraint:
1<=length of STR<=8
Time Limit: 1sec

Sample Input 1:
cba

Sample Output 1:
abc
acb
bac
bca
cab
cba*/


#include<iostream>
#include<string>
using namespace std;

void print(string s,string output){
    if(s.empty()){
        cout<<output<<endl;
        return ;
    }
    for(int i=0;i<s.length();i++){
        string str = s.substr(0,i) + s.substr(i+1,s.length() - i -1);
        print(str,output + s[i]);
    }
    return;
}

int main(){
    string s;
    cin>>s;
    print(s,"");
    return 0;
}