//deques-STL
#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k) {
    deque<int> dq; // stores indices

    for (int i = 0; i < n; i++) {
        // Remove indices which are out of the current window
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        // Remove smaller elements from the back as they are useless
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }

        // Add current element at the back
        dq.push_back(i);

        // Print max element for the current window
        if (i >= k - 1) {
            cout << arr[dq.front()] << " ";
        }
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}
