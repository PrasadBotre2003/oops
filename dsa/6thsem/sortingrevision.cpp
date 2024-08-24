#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>&arr,int n){

    for(int i = 0;i<n;i++){

        for(int j = i+1;j<n ;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void recBubble(vector<int>&arr,int n){

for(int i = 0;i<=n-2;i++){
if(arr[i]>arr[i+1]){
    swap(arr[i],arr[i+1]);
}
recBubble(arr,n -1);
}



}


void insertionSOrt(vector<int>&arr,int n){

for(int i =1;i<n;i++){
int key = arr[i];
int j = i - 1;
while(j>=0 && arr[i]>key){
    arr[j+1] = arr[j];
    j = j -1;
}
arr[j+1] = key;

}


}
int main(){



    vector<int>ans {2,3,4,5,6,73,1,3};
   // bubbleSort(ans,8);
   // recBubble(ans,8);
   insertionSOrt(ans,8);
    for(int i = 0;i<8;i++){
        cout<<ans[i]<<"  ";
            }
            cout<<endl;
}