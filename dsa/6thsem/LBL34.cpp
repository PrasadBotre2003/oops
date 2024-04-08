/*------pending*******date 12/13/23
insertion sort
selection sort*/



#include<iostream>
using namespace std;
void print(int arr[],int n){
for(int i = 0;i<n;i++){
cout<<arr[i]<<endl;
}
}
void bubble(int arr[],int n){

    if(n == 0|| n == 1){
        return ;
    }

    for(int i = 0;i<n-1;i++){

        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble(arr,n-1);

    
}
int main()
{
 int arr[7] = {2,1,6,5,4,00,88};
 bubble(arr,7);  

 print(arr,7);
}


/*#include<iostream>
using namespace std;
void display(int *arr,int n){
for(int i = 0;i<n;i++){
cout<<arr[i]<<endl;
}
}
void bubblesortrec(int *arr,int n){
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesortrec(arr,n-1);
}

bool palindrome(string &s,int i,int j){
    if(i>j){
         cout<<" palindrome"<<endl;
        return true;

    }

    if(s[i] != s[j]){
         cout<<"not palindrome"<<endl;
        return false;
      
    }
    else{
        return palindrome(s,i+1,j-1);
    }
    return true;
}
int main()
{
   
 int arr[5] = {1,5,7,4,5 };
 display(arr,5);

 bubblesortrec(arr,4);

for(int i = 0;i<5;i++){
cout<<arr[i]<<endl;

}
}*/