#include<bits/stdc++.h>
using namespace std;

/*Mango Distribution Given a number of mangoes and number of persons. Find the number of ways to distribute identical mangoes among identical persons Input Specification: input1: the number of mangoes input2: the number of persons Output Specification: Return the number of ways to distribute identical mangoes among identical persons
. Example:
input1: 2 
input2: 2 
Output: 3
All possible distributions of 2 identical mangoes to 2 identical persons are (1,1), (2,0) and (0,2). Hence the output is 3. 
input1: 12
Output: 1
Explanation:
the outout is 12.
All possible distributions of 1 identical mango to 12 identical persons are 12

Here's a Python code that solves the problem of distributing a given number of mangoes among a given number of persons:
*/

int factorial(int n){
if(n == 0)return 1;


return n * factorial(n-1);




}


int  solve(int n , int r){


int ans = factorial(n) / (factorial(r) * factorial(n-r));

return ans;

}

int main(){
int n =  1;
 int r = 12;

//output -->3;


cout<<solve(n+r -1 ,  r-1)<<endl;



}