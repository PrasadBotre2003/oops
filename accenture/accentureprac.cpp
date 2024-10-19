/*Given an array of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to given sum. 

Examples:

Input: n = 6, arr[] = {3, 34, 4, 12, 5, 2}, sum = 9
Output: 1 
Explanation: Here there exists a subset with sum = 9, 4+3+2 = 9.
Input: n = 6, arr[] = {3, 34, 4, 12, 5, 2} , sum = 30
Output: 0 
Explanation: There is no subset with sum 30.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function isSubsetSum() which takes the array arr[], its size N and an integer sum as input parameters and returns boolean value true if there exists a subset with given sum and false otherwise. The driver code itself prints 1, if returned value is true and prints 0 if returned value is false.

Expected Time Complexity: O(sum*n)
Expected Auxiliary Space: O(sum*n)

Constraints:
1 <= n <= 100
1<= arr[i] <= 100
1<= sum <= 104

*/
#include<bits/stdc++.h>
using namespace std;



bool solve(vector<int>&arr, int sum , int inde ){

if(inde >= arr.size()){
    return false;
}
    if(sum  == 0){

        return true;
    }
    if(sum < 0){
        return false;
    }
bool pick , notpick ;

if(arr[inde]<=sum){
   pick  =  solve(arr, sum - arr[inde] ,inde+ 1);
}

notpick = solve(arr, sum ,inde+1);

return pick || notpick ;

}




int  main(){




vector<int>arr = { 3, 34, 4, 12, 5};

int sum = 9 ;
int inde = 0 ;
cout<<solve(arr, sum , inde)<<endl;



}