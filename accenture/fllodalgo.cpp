#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>& arr, int newColor, int row, int col, int n, int m, int targetColor) {
    
    if (row < 0 || col < 0 || row >= n || col >= m || arr[row][col] != targetColor) {
        return;
    }


    arr[row][col] = newColor;

  
    solve(arr, newColor, row - 1, col, n, m, targetColor);
    solve(arr, newColor, row, col - 1, n, m, targetColor); 
    solve(arr, newColor, row, col + 1, n, m, targetColor); 
    solve(arr, newColor, row + 1, col, n, m, targetColor); 
}

int main() {
    vector<vector<int>> arr = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}
    };

    int newColor = 2;
    int sc = 1; 
    int sr = 1; 
    int n = arr.size();
    int m = arr[0].size();

    int targetColor = arr[sr][sc];


        solve(arr, newColor, sr, sc, n, m, targetColor);
    


    for (auto& row : arr) {
        for (auto& cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }

    return 0;
}
