#include <bits/stdc++.h>
using namespace std;

// Function to check if a string is a palindrome
bool ispalindrome(string &s) {
    int i = 0;
    int j = s.length() - 1;

    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

// Function to generate all subsequences of a string and count palindromes
void subseq(string &s, int index, int n, string temp, int &cnt) {
    if (index == n) {
        // Output the generated subsequence
     //   cout << temp << endl;

        // Check if the subsequence is a palindrome and increase the count
        if (!temp.empty()&& ispalindrome(temp)) {
             // Output the generated subsequence
        cout << temp <<"   "<<"palindrome"<< endl;
            cnt++;
        }
        return;
    }

    // Include the current character and generate subsequences
    temp.push_back(s[index]);
    subseq(s, index + 1, n, temp, cnt);

    // Exclude the current character and generate subsequences
    temp.pop_back();
    subseq(s, index + 1, n, temp, cnt);
}

int main() {
    string s = "aaaa";
    string temp = "";
    int n = s.length();
    int cnt = 0;

    // Generate subsequences and count palindromic ones
    subseq(s, 0, n, temp, cnt);

    // Output the count of palindromic subsequences
    cout << "Number of palindromic subsequences: " << cnt << endl;

    return 0;
}
