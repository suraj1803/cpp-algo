#include <iostream>
#include <vector>
using namespace std;

// elements are distinct
int countRotation(vector<int> &arr) {
  int low = 0;
  int high = arr.size() - 1;
  
  int ans = 0;
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] < arr[0]) {
      ans = mid;
      high = mid - 1;
    }
    else {
      low = mid + 1;
    }
  }

  return ans;
}

int main()
{
  vector<int> arr = {4, 5, 1, 2, 3};
  cout << countRotation(arr) << endl;

  return 0;
}
