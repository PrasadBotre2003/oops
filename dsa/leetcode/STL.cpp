#include<iostream>
#include<array>
#ifndef _CXX0X_WARNING_H
#define _CXX0X_WARNING_H 1

#if __cplusplus < 201103L
using namespace std;
 
 array<int,5> arr = {1,2,3,4,5};
 int sie = arr.size();
 for(int i = 0;i<sie;i++){
 	cout<<:"arr is"<<arr[i];
 }
