#include<iostream>
using namespace std;


int main(){

    cout<<"enter mat size"<<endl;


int row  = 3;
//cin>>row;
int col = 3;
//cin>>col;

//create 2d array
int **arr = new int *[row];
for(int i = 0;i<row;i++){
arr[i] = new int [col];
 }

//tacking input
for(int i = 0;i<row;i++){
for(int j = 0;j<col;j++){

cin>>arr[i][j];
 }
 cout<<endl;
}

//tacking output
for(int i = 0;i<row;i++){
for(int j = 0;j<col;j++){

cout<<arr[i][j];
 }
 cout<<endl;
}

for(int i = 0;i<row;i++){
	delete [] arr[i];
}
delete []arr;

}
