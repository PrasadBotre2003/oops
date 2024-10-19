#include<bits/stdc++.h>
using namespace std;
/*1143. Longest Common Subsequence
Solved
Medium
Topics
Companies
Hint
Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

For example, "ace" is a subsequence of "abcde".
A common subsequence of two strings is a subsequence that is common to both strings.

 

Example 1:

Input: text1 = "abcde", text2 = "ace" 
Output: 3  
Explanation: The longest common subsequence is "ace" and its length is 3.
Example 2:

Input: text1 = "abc", text2 = "abc"
Output: 3
Explanation: The longest common subsequence is "abc" and its length is 3.
Example 3:

Input: text1 = "abc", text2 = "def"
Output: 0
Explanation: There is no such common subsequence, so the result is 0.
 

Constraints:

1 <= text1.length, text2.length <= 1000
text1 and text2 consist of only lowercase English characters.
Seen this question in a real interview before?
1/5
Yes
No
Accepted
1.2M
Submissions
2.1M
Acceptance Rate
57.8%
Topics
Companies
Hint 1
Hint 2
Similar Questions
Discussion (166)

Choose a type



*/

int solve(string s1, string s2, int i ,int j){

if(s1.length()==i){
    return 0;
}

if(s2.length()==j){
    return 0;
}



int ans = 0;


if(s1[i] == s2[j]){
ans =  1 + solve(s1,s2,i+1,j+1);
}
else{



ans = max(solve(s1,s2,i+1,j),solve(s1,s2,i,j+1));

}


return ans;
}

int solve(string &text1, string &text2,int i, int j,vector<vector<int>>&dp){
if(i == text1.length()){
    return 0;
}

if(j == text2.length()){
    return 0;
}
if(dp[i][j]!= -1){
    return dp[i][j];
}


if( text1[i] == text2[j] ){
dp[i][j]= 1 + solve(text1,text2,i+1,j+1,dp);

}
else{

dp[i][j] = max(solve(text1,text2,i+1,j,dp),solve(text1,text2,i,j+1,dp));

}

return dp[i][j];


}


int solve3(string &text1, string &text2){


int m = text1.length();
int n = text2.length();
 vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

for(int i = n-1 ; i>= 0; i--){


    for(int j = m-1 ; j>=0;j--){

if(text1[i] = text2[j]){

dp[i][j] = 1  + dp[i+1][j+1];

}
else{

dp[i][j] = max(dp[i][j+1] , dp[i+1][j]);

}


    }
}
return dp[0][0];
}
int main(){


string s1 = "abcde";
string s2 = "ace";
//vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,-1));
cout<<solve3(s1,s2)<<endl;


}