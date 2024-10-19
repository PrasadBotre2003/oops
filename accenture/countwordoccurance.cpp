#include<bits/stdc++.h>
using namespace std;


int main(){




    string input1 = "GeeksforGeeks portal A computer science portal for geeks";


    string input3 = "portal";

  int count = 0;
    int n = input1.length();
    int m = input3.length();

    // Loop through input1 to find occurrences of input3
    for (int i = 0; i <= n - m; i++) {
        int j;
        // Check if input3 matches with substring of input1 starting at i
        for (j = 0; j < m; j++) {
            if (input1[i + j] != input3[j]) {
                break;
            }
        }

        // If the entire input3 is found, increment the count
        if (j == m) {
            count++;
        }

        

}
cout<<count<<endl;

}