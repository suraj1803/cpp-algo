#include <climits>
#include <iostream>
#include <vector>
using namespace std;

// elements are distinct
int findMin(vector<int> &arr) {

  if (arr[0] <= arr[arr.size() - 1])
    return arr[0];

  int low = 0;
  int high = arr[arr.size() - 1];
  
  int ans = INT_MAX;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] <= arr[low]) {
      ans = min(ans, arr[mid]);
      high = mid - 1;
    }
    else {
      ans = min(ans, arr[low]);
      low = mid + 1;
    }
  }

  return ans;
}

int main()
{
  int n;
  vector<int> arr = {};
  cout << findMin(arr) << endl;

  return 0;
}
