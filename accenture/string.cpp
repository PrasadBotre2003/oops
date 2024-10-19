#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "AAC";
    string s2 = "ACC";

    // Create a frequency map for characters in s2
    unordered_map<char, int> freq;

    for (auto i : s2) {
        freq[i]++;
    }

    // Decrease frequency for characters in s1 that are also in s2
    for (auto i : s1) {
        if (freq.find(i) != freq.end() && freq[i] > 0) {
            freq[i]--;
        }
    }

    // Print remaining character frequencies
    for (auto i : freq) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
