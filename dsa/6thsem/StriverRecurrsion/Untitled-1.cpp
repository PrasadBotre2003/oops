#include<iostream>
using namespace std;
void palindrome(string &s,int st,int n){
int lastind = n - st -1;
if(st>= lastind){
    return;
}
if(tolower(s[st]) != tolower(s[lastind])){
cout<<"not a palindrome"<<endl;
return;
}
else{
    st = st+1;
palindrome(s,st,n);
cout<<"its palindrome"<<endl;
}
}
void reverse(int *arr,int s,int n){
int lastind = n - s -1;
 if(s >= lastind){
    return ;
 }
cout<<"s"<<s<<  "  " <<"lastind"<<lastind<<endl;
 swap(arr[s],arr[lastind]);
 s++;
 reverse(arr,s,n);
}
void print(int *arr,int n){
 for(int i = 0;i<n;i++){
 cout<<arr[i]<< "  ";
 }
 cout<<endl;
 }

 //sub sequance  
int main()
{

int arr[6]= {1,2,3,4,5,6 };
string s ;
cout<<"enter a string "<<endl;
cin>>s;

palindrome(s,0,s.length() - 1);
//cout<<"size of arr"<<sizeof(arr)/4<<endl;
print(arr,6);
//reverse(arr,0,6);
//print(arr,6);
return 0;
}