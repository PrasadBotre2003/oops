/*(Asked in Accenture OnCampus 10 Aug 2022, Slot 2)

Problem Description :
The Binary number system only uses two digits, 0 and 1 and number system can be called binary string. You are required to implement the following function:

int OperationsBinaryString(char* str);

The function accepts a string str as its argument. The string str consists of binary digits eparated with an alphabet as follows:

– A denotes AND operation
– B denotes OR operation
– C denotes XOR Operation
You are required to calculate the result of the string str, scanning the string to right taking one opearation at a time, and return the same.

Note:

No order of priorities of operations is required
Length of str is odd
If str is NULL or None (in case of Python), return -1
Input:
str: 1C0C1C1A0B1

Output:
1

Explanation:
The alphabets in str when expanded becomes “1 XOR 0 XOR 1 XOR 1 AND 0 OR 1”, result of the expression becomes 1, hence 1 is returned.

Sample Input:
0C1A1B1C1C1B0A0*/

#include<bits/stdc++.h>
using namespace std;


int main(){

string s = "0C1A1B1C1C1B0A0" ; 
int n = s.length();
int sum = 0;
for(int i  = 0;i<n;i++){
char ch = s[i]  - '0';
sum = ch;
if(s[i] == 'A'){

    sum = sum && (s[i+1] - '0');
}
else if(s[i] == 'B'){
 sum = sum || (s[i+1] -'0');

}
else if(s[i] =='C'){
 sum = sum ^ (s[i+1] - '0');

}
else{


    s+=s[i] - '0';
}


}
cout<<sum<<endl;

}
