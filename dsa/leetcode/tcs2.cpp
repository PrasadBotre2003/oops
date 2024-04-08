#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N;

    vector<int> priorities(N);
    for (int i = 0; i < N; ++i) {
        cin >> priorities[i];
    }

    cin >> K;

    queue<int> orderQueue;
    for (int i = 0; i < N; ++i) {
        orderQueue.push(priorities[i]);
    }

    int servedOrderCount = 0;
    while (!orderQueue.empty()) {
        int currentOrder = orderQueue.front();
        orderQueue.pop();
        ++servedOrderCount;

        // Increment priority of orders before the served order
        for (int& priority : priorities) {
            if (priority != -1 && priority < currentOrder) {
                ++priority;
            }
        }

        // Mark the served order as -1
        priorities[distance(priorities.begin(), find(priorities.begin(), priorities.end(), currentOrder))] = -1;

        // If Raj's friend's order is served, break the loop
        if (currentOrder == priorities[K - 1]) {
            break;
        }
    }

    cout << servedOrderCount << endl;

    return 0;
}

