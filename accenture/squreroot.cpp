#include<bits/stdc++.h>
using namespace std;

void solve(int a, int b ,int c) {
    int d = (b*b) - 4 * a * c;

    if (d > 0) {
        // Two distinct real roots
        cout << (-b - sqrt(d)) / (2 * a) << "  " << (-b + sqrt(d)) / (2 * a) << endl;
    } 
    else if (d == 0) {
        // One real root
        cout << (-b / (2 * a)) << endl;
    } 
    else {
        // Complex roots
        cout << (-b / (2 * a)) << " - " << sqrt(-d) / (2 * a) << "i  ";
        cout << (-b / (2 * a)) << " + " << sqrt(-d) / (2 * a) << "i" << endl;
    }
}

int main() {
    int a = 3, b = 6, c = 9;
    solve(a, b, c);
    return 0;
}
