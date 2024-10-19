#include<bits/stdc++.h>
using namespace std;

// Function to compute sum of squares of digits
int solve(int num) {
    int ans = 0;
    while (num) {
        int ele = num % 10;
        ans += ele * ele;
        num = num / 10;
    }
    return ans;
}

int main() {
    int num = 19;  // Change this number for testing different inputs
    map<int, bool> st;

    while (num != 1 && st.find(num) == st.end()) {
        st[num] = true;  // Mark this number as visited
        num = solve(num);
    }

    if (num == 1) {
        cout << "It is a happy number" << endl;
    } else {
        cout << "It is not a happy number (cycle detected)" << endl;
    }

    return 0;
}
