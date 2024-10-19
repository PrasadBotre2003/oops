#include<bits/stdc++.h>
using namespace std;



bool isnumric(string input) {
    if ((input[0] - '0') >= 0 && (input[0] - '0') <= 9)  {
        return false;
    }

    for (int i = 0 ; i < input.length(); i++) {
        if ((input[i] - '0') >= 0 && (input[i] - '0') <= 9)  {
            return true;
        }



    }

    return false;


}



bool iscapital(string input) {


    for (int i = 0 ; i < input.length(); i++) {
        if (input[i]  >= 'A' && input[i] <= 'Z') {
            return true;
        }



    }

    return false;


}


bool space(string input) {


    for (int i = 0 ; i < input.length(); i++) {
        if (input[i] == ' ' || input[i] == '/') {
            return false;
        }



    }

    return true;


}





int main() {
#ifndef ONLINE_JUDGE


    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif






    string input ;
    cin >> input;

    int n = input.length();


    cout << isnumric(input) << endl;
    cout << iscapital(input) << endl;
    cout << space(input) << endl;

    if (isnumric(input) && iscapital(input) && space(input)) {


        cout << "pass is valid" << endl;
    }
    else {
        cout << "invalid pass" << endl;
    }








    return 0;
}