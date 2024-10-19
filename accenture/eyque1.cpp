#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    map<string, int> segmentCount;
    segmentCount["red"] = 0;
    segmentCount["white"] = 0;

    // Current color to track segments
    string currentColor = "";
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != currentColor) {
            // If the color changes, increment the segment count of the new color
            currentColor = arr[i];
            segmentCount[currentColor]++;
        }
    }

    // Calculate the minimum steps needed to remove all blocks
    int minSteps = min(segmentCount["red"], segmentCount["white"]) + 1;

    cout << minSteps << endl;

    return 0;
}
