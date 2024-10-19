#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();
    int k =2;
k = k % n;
    // Print original array
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // Reverse the entire array
    reverse(arr.begin(), arr.end());
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // Reverse the first n-k elements
    reverse(arr.begin(), arr.begin() + n - k);

    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // Reverse the last k elements
    reverse(arr.begin() + n - k, arr.end());
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
