#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int cnt = 0;
    for(int i = low;i<high;i++){
        if(arr[i]<pivot){
            cnt++;
        }
    }

    int pivotIndex = low + cnt;
swap(arr[pivotIndex],arr[low]);
int i = low;
int j = high;
while(i<=pivotIndex && j> pivotIndex){

    while(arr[i]<=pivot ){
        i++;
    }

     while(arr[j]>pivot ){
        j--;
    }

    while(i<=pivotIndex && j> pivotIndex){
        swap(arr[i++],arr[j--]);
    }
}

return pivotIndex;

}

 void quickSort(vector<int> &arr,int low,int high ){
    if(low >= high){
        return ;
    }

    int  p = partition(arr,low,high);

    quickSort(arr,low,p -1);
    quickSort(arr,p + 1,high);
 }
int main()
{
       vector<int> arr = {5,4,2,1,3};


         for(int i = 0;i<5;i++){
    cout<<arr[i]<<"  ";
   }
   cout<<endl;
   quickSort(arr,0,6);

     for(int i = 0;i<5;i++){
    cout<<arr[i]<<"  ";
   }
   cout<<endl;
    return 0;
}