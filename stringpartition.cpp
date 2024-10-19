#include<bits/stdc++.h>
using namespace std;

/*Medium
Topics
Companies
Given a string s, partition s such that every 
substring
 of the partition is a 
palindrome
. Return all possible palindrome partitioning of s.

 

Example 1:

Input: s = "aab"
Output: [["a","a","b"],["aa","b"]]
Example 2:

Input: s = "a"
Output: [["a"]]
 

Constraints:

1 <= s.length <= 16
s contains only lowercase English letters.

Seen this question in a real interview before?
1/5
Yes
No
Accepted
964.9K
Submissions
1.4M
Acceptance Rate
70.3%
Topics
String
Dynamic Programming
Backtracking
*/
bool ispalindrome(string temp , int start , int end){
while(start <end){


    if(temp[start] != temp[end]){
        return false;
    }
    start++;
    end--;
}

return true;



}

void solve(int inde ,string &s,string temp,vector<string>&path,vector<vector<string>>&ans){
if(inde ==  s.length()){

ans.push_back(path);
    return ;
}



for(int i = inde ; i< s.length();i++){




if(ispalindrome(s ,inde , i)){
    temp = s.substr(inde , i  - inde  + 1);
    path.push_back(temp);


solve(i+1, s, temp , path , ans);
path.pop_back();
}
}





}
   
int main(){

string s = "aab";

vector<vector<string>>ans ;
vector<string>path;
string temp = "";

solve(0,s,temp,path,ans);



for(auto i : ans){

    for(auto j : i){


        cout<<j <<" ";
    }
    cout<<endl;
}

}