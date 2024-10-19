#include<bits/stdc++.h>
using namespace std;

int solve(int num) {
    int ans = 0;  // Initialize ans inside the function
    while (num) {
        if (num & 1) {
            ans += 2;
        } else {
            ans += 1;
        }
        num = num >> 1;
    }
    return ans;
}

int main() {
    int num = 5;
    int ans = 0;

    for (int i = 1; i <= num; i++) {
        int a = solve(i);
        if (a % 2 != 0) {
            ans++;
            cout << a << endl;
        }
    }
    cout << ans << endl;  // Output the final count of odd values
}
