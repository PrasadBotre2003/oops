/*
13 /12/2023
merge sort */
#include<iostream>
using namespace std;

void display(int arr[],int n){
for(int i = 0;i<n;i++){
cout<<arr[i]<<"  ";
}
cout<<endl;
}
void MerSort(int *arr,int s,int e){

int mid = (s + e)/2;
int len1 = mid - s + 1;
int len2 = e - mid ;

int *first = new int[len1];
int *second = new int[len2];


//copy element 
int maininde = s;
for(int i = 0;i<len1;i++){
    first[i] = arr[maininde++];
}

 maininde = mid + 1;
for(int i = 0;i<len2;i++){
    second[i] = arr[maininde++];
}

int index1 = 0;
int index2  = 0;
 maininde = s;

while( index1 < len1 && index2 < len2){
    if(first[index1]<second[index2]){
        arr[maininde++] = first[index1++];
    }
    else{
          arr[maininde++] = second[index2++];
    }
     while(index1 < len1){
        arr[maininde++] = first[index1++];
    }

    while(index2 < len2){
        arr[maininde++] = second[index2++];
    }
 
}
}
void mergesort(int *arr,int s,int e){
if(s>=e){
    return ;
}
//cout<<"fun called"<<endl;
int mid = (s +e) /2;
//left part sorted
mergesort( arr, s, mid);
//right part sorted
mergesort( arr,mid+1,e);

MerSort(arr,s,e);
}


int main()
{
    int arr[16 ] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;
for(int i = 0;i<n;i++){
cout<<arr[i]<<"  ";
}
cout<<endl;
mergesort(arr,0,n-1);
for(int i = 0;i<n;i++){
cout<<arr[i]<<"  ";
}
    return 0;
}
