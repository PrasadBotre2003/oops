#include<bits/stdc++.h>
using namespace std;
/*B. Xenia and Ringroad
time limit per test2 seconds
memory limit per test256 megabytes
Xenia lives in a city that has n houses built along the main ringroad. The ringroad houses are numbered 1 through n in the clockwise order. The ringroad traffic is one way and also is clockwise.

Xenia has recently moved into the ringroad house number 1. As a result, she's got m things to do. In order to complete the i-th task, she needs to be in the house number ai and complete all tasks with numbers less than i. Initially, Xenia is in the house number 1, find the minimum time she needs to complete all her tasks if moving from a house to a neighboring one along the ringroad takes one unit of time.

Input
The first line contains two integers n and m (2 ≤ n ≤ 105, 1 ≤ m ≤ 105). The second line contains m integers a1, a2, ..., am (1 ≤ ai ≤ n). Note that Xenia can have multiple consecutive tasks in one house.

Output
Print a single integer — the time Xenia needs to complete all tasks.

Please, do not use the %lld specifier to read or write 64-bit integers in С++. It is preferred to use the cin, cout streams or the %I64d specifier.

Examples
InputCopy
4 3
3 2 3
OutputCopy
6
InputCopy
4 3
2 3 3
OutputCopy
2
Note
In the first test example the sequence of Xenia's moves along the ringroad looks as follows: 1 → 2 → 3 → 4 → 1 → 2 → 3. This is optimal sequence. So, she needs 6 time units.

*/



int main(){
 int n, m;
    cin >> n >> m;  
    vector<int> tasks(m);
    for (int i = 0; i < m; i++) {
        cin >> tasks[i];  
    }

    int currentHouse = 1;  // Xenia starts at house 1
    int totalTime = 0;

for(int i = 0; i < m;i++){
int  targethouse = tasks[i];
if(targethouse>=currentHouse){

totalTime+= targethouse - currentHouse;
}
else{

totalTime += (n-currentHouse) + targethouse;

}

currentHouse = targethouse;

}


cout<<totalTime<<endl;




}