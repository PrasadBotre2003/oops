#include <iostream>
using namespace std;

long long factorial(int n) {
 if(n == 0)return 1;


    return n * factorial(n -1);
}


long long combination(int n, int r) {
   // if (r > n) return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int m, n;
    cout << "Enter the number of mangoes (m): ";
    cin >> m;
    cout << "Enter the number of persons (n): ";
    cin >> n;


    long long ways = combination(m + n - 1, n - 1);

    cout << "The number of ways to distribute " << m << " mangoes among " << n << " persons is: " << ways << endl;

    return 0;
}
