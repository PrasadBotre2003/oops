#include<iostream>
#include <bits/stdc++.h>
using namespace std;










// CHECK PALINDROME

int  palindrome(char name[],int n){
int s = 0;
  int e = n-1;
  while(s<=e){
    if(name[s] != name[e]){
      
      return false;
      break;
    }
    return true;
  }  
}

//REVERSE STRING 
void reverse(char name[],int n){
  int s = 0;
  int e = n -1 ;
  while(s<e){
   //swap(name[s++],name[e--]);
  int temp = name[s];
    name[s] = name[e];
    name[e] = temp;
    s++;
    e--;
  }
}

// LENGTH OF STRING 
int length(char name[]){
  int count = 0;
  
 for(int i = 0;name [i] !='\0';i++){
   count++;
 }
  return  count;
}
int main() {

char name[20] ;
  cout<<"enter your name "<<endl;
  cin>>name;
  cout<<"my name is "<<name<<endl;
 int l = length(name);
  cout<<"length is "<<l<<endl;
  cout<<"reverse is" ;
  reverse(name,l);
  cout<<"reversed "<<name<<endl;
cout<<"palindrome "<< palindrome(name,l);



  
}
