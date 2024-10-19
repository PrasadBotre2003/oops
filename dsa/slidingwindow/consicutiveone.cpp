#include<bits/stdc++.h>
using namespace std;
/*1004. Max Consecutive Ones III
Medium
Topics
Companies
Hint
Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

 

Example 1:

Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
Example 2:

Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
Output: 10
Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
 

Constraints:

1 <= nums.length <= 105
nums[i] is either 0 or 1.
0 <= k <= nums.length
Seen this question in a real interview before?
1/5
Yes
No
Accepted
645K
Submissions
1M
Acceptance Rate
63.9%
Topics
Companies
Hint 1
Hint 2
Hint 3
Hint 4
Similar Questions
Discussion (55)

Choose a type



Copyright ©️ 2024 LeetCode*/



int solve(vector<int>&arr,int k){
int  n = arr.size();

int macnt = 0;
for(int i = 0 ;i <n;i++ ){


    int cnt = 0;

    for(int j = i ; j< n ;j++){
if(arr[j] == 0){
    cnt++;
}

if(cnt<=k){
int len = j - i + 1;

macnt = max(macnt,len);


}


    }



}
return macnt;
}
//two pointer approch 
int solve1(vector<int>& arr, int k) {
    int l = 0, r = 0; 
    int max_len = 0;
    int cnt = 0;
    int n = arr.size();

    while (r < n) { 
        if (arr[r] == 0) {
            cnt++;
        }

        while (cnt > k) {
            if (arr[l] == 0) {
                cnt--;
            }
            l++;
        }

        // Update the maximum length
        max_len = max(max_len, r - l + 1);

        r++;
    }

    return max_len;
}


int solve2(vector<int>& arr, int k) {
    int l = 0, r = 0; 
    int max_len = 0;
    int cnt = 0;
    int n = arr.size();

    while (r < n) { 
        if (arr[r] == 0) {
            cnt++;
        }

       if(cnt>k){
            if (arr[l] == 0) {
                cnt--;
            }
            l++;
       }


       if(cnt<=k){
        max_len = max(max_len, r - l + 1);
       }
        r++;
    }

    return max_len;
}


int main(){

vector<int>arr = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
int k = 3; 


cout<<solve2(arr,k)<<endl;

return 0;

}