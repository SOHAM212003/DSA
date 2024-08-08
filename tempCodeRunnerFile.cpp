#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int maxValue(vector<int>& arr) {
    int max_val = INT_MIN;  // Start with the smallest possible integer value
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            double avg = static_cast<double>(sum) / (j - i + 1);
            int val = static_cast<int>(sum / avg);
            max_val = max(max_val, val);
        }
    }

    return max_val;
}

int main() {
    vector<int> arr = {5, 5, 6, -1, -2};
    cout << maxValue(arr) << endl;  // Expected output: 80
    return 0;
}
