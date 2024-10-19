

#include<bits/stdc++.h>
using namespace std;
void solve(int a , int b , int c){
//calculate d b*b-4a*c


	

int d = ((b*b)-4*(a*c));
int ans ;
    double sqrt_val = sqrt(abs(d));
	if(d  > 0){
 cout << "Roots are real and different \n";
        cout << (double)(-b + sqrt_val) / (2 * a) << "\n"
             << (double)(-b - sqrt_val) / (2 * a);

}


	
else if(d ==0){

//-b+d/2a

    cout << "Roots are real and same \n";
        cout << -(double)b / (2 * a);


}




else{

 cout << "Roots are complex \n";
        cout << -(double)b / (2 * a) << " + i"
             << sqrt_val / (2 * a) << "\n"
             << -(double)b / (2 * a) << " - i"
             << sqrt_val / (2 * a);


}




}
int main(){


int a = 3;
int b = 6 ;
int c = 9;



solve(a,b,c);


}