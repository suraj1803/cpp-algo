#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int check(vector<int> &arr,int mid, int x) {
  if (arr[mid] >= x)
    return 1;
  return 0;
}

int lowerBound(vector<int> &arr, int x) {
  int low = 0;
  int high = arr.size() - 1;

  int ans = arr.size();
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (check(arr, mid, x)) {
      ans = mid;
      high = mid - 1;
    }
    else {
      low = mid + 1;;
    }
  }

  return ans;
}

int main()
{
  vector<int> arr = {3, 5, 8, 15, 16};
  cout << lowerBound(arr, 10) << endl;;

  // c++ stl method 
  int lb = lower_bound(arr.begin(), arr.end(), 10) - arr.begin();
  cout << lb << endl;

  return 0;
}
