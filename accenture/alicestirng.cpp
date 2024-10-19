/*Alice and String
Alice has a peculiar fondness for strings without any interruptions. She considers "." as an interruption. You are given a string S and your task is to find and return the length of the longest uninterrupted substring to match alices' fondness.
128020
Input Specification:
01032
input1: A string value S.
Output Specification:
Return an integer value representing the length of the longest uninterrupted substring to match alices' fondness.
S = "this.is.a.debugwithshubham"
output: 16 
For the input string "this.is.a.debugwithshubham", the uninterrupted substrings are "this" and "is" and "a" and "debugwithshubham". The longest substring is "debugwithshubham", and its length is 6*/
#include<bits/stdc++.h>
using namespace std;
int main(){

string s = "this.is.a.debugwithshubham.";
int cnt = 0;

int ma = 0 ;

for(int i = 0 ;i < s.length();i++){

if(s[i] =='.'){
    ma = max(ma,cnt);
    cnt = 0 ;
}

cnt++;


}

cout<<ma<<endl;




}

