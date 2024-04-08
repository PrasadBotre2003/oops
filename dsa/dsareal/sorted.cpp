#include<iostream>
using namespace std;
bool sorted(int *arr,int s ){

if(s = 1 && s==0){
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
int arr[5] = {1,2,3,4,5};
int s = 5;
int ans = sorted(arr,s);
if(ans == 1){
    cout<<"sorted"<<endl;
}else{
     cout<<"not_sorted"<<endl;  
}


}
