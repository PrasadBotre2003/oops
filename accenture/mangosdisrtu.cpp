#include <iostream>
using namespace std;

// Function to calculate factorial of a number
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate the binomial coefficient C(n, k)
long long binomialCoefficient(int n, int k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    long long numerator = factorial(n);
    long long denominator = factorial(k) * factorial(n - k);
    return numerator / denominator;
}

// Function to find the number of ways to distribute mangoes
long long ma
ngoDistribution(int mangoes, int persons) {
    // C(mangoes + persons - 1, persons - 1)
    return binomialCoefficient(mangoes + persons - 1, persons - 1);
}

int main() {
    int mangoes, persons;
    cout << "Enter the number of mangoes: ";
    cin >> mangoes;
    cout << "Enter the number of persons: ";
    cin >> persons;

    long long ways = mangoDistribution(mangoes, persons);
    cout << "Number of ways to distribute " << mangoes << " mangoes among " << persons << " persons: " << ways << endl;

    return 0;
}
