#include<iostream>
using namespace std;

void printcnt(int n){
if(n == 0){
    return;
}
cout<<n;
cout<<endl;
printcnt(n -1);
cout<<n;
cout<<endl;


}
int power(int n){
if(n == 0){
    return 1;
}

int ans = 2 * power(n -1);

return ans;

}
 int factorial(int num){
    int n;
if(num == 1){
    return 1;
}
//cout<<"factorial is"<<n<<endl;


 n = num * factorial(num -1);

cout<<"factorial is"<<n<<endl;
return n;

 }
int main(){
  // factorial(4);
 // power(6);
 printcnt(5);
}