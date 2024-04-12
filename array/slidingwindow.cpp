#include <iostream>
using namespace std;

int maxSubArrSum(int arr[], int size, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int maxSum = sum;
    for (int i = k; i < size; i++) {
        sum = sum - arr[i - k] + arr[i];
        maxSum = max(maxSum, sum);
    }

    return maxSum;
}

int main() {
    int arr[] = {100, 200, 300, 400};
    cout << maxSubArrSum(arr, 4, 2) << endl; 

    return 0;
}
