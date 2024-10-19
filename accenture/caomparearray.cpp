#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("op.txt", "w", stdout);
#endif

    vector<int>arr = {1, 2, 5, 4, 3};


    vector<int>newarray(arr.begin(), arr.end());

    sort(newarray.begin(), newarray.end());


    int i = 0 ;
    int j = arr.size() - 1;



    while (arr[i] == newarray[i]) {
        i++;
    }

    while (arr[j] == newarray[j]) {
        j--;
    }

    cout << i << j << endl;


    reverse(arr.begin() + i, arr.begin() + j + 1);


    if (arr == newarray) {

        cout << "it is possible" << endl;
    }
}




