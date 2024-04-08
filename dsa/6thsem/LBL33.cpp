#include<iostream>
using namespace std;

void peint(int *arr,int s,int e)
    {
        for(int i = s;i<=e;i++){
            cout<<arr[i]<<"  ";
        }
        cout<<endl;

}
int pivot(int *arr,int s,int e){
    peint(arr,s,e);
    if(s>e){
        return -1;
    }
    int mid = s + (e - s)/2;
    if(arr[0]<arr[mid]){
   pivot(arr,mid+ 1,e);
    }
     else if(arr[mid]> arr[mid-1] && arr[mid]<arr[mid+1]){
        return arr[mid];
    }
    return arr[mid];
}
int binarySerch(int *arr,int key,int s,int e){
    peint(arr,s,e);
    if(s>e){
        return -1;
    }
    int mid = s + (e - s)/2;
    if(arr[mid]==key){
        return 1;
    }
    else if(arr[mid]>key){
        return binarySerch(arr,key,0,mid-1);
    }
    else{
        return binarySerch(arr,key,mid+1,e);
    }
    return 0;
}
int linearSerch(int *arr,int key,int s){
 if(s==1){
    return 0;
 }
    else if(arr[0]==key){
        return 1;
    }

    else{
        
        linearSerch(arr+1,key,s-1);
    } 
    return 0;
}
int Arraysum(int *arr,int n){
    if(n == 0){
        return arr[0];
    }
    int sum = arr[0]+ Arraysum(arr+1,n-1);
    
    return sum;
}



bool sorted(int *arr,int s ){

if(s = 1 || s==0){
return true;
}

if(arr[0]>arr[1]){
     
    return false;
}
else{
  
    bool ans = sorted(arr+1,s-1);

    return ans;
}

}


int main(){
//factorial(3)
int arr[6] = {11,25,33,50,12,18};
int s = 6;
/*int ans = sorted(arr,s);
if(ans){
    cout<<"sorted"<<endl;
}else{
     cout<<"not_sorted"<<endl;  
}*/
//cout<<Arraysum(arr,5)<<endl;
//cout<<linearSerch(arr,55,s)<<endl;
//cout<<binarySerch(arr,27,0,s)<<endl;
cout<<pivot(arr,0,s)<<endl;
}