#include <algorithm>
#include <iostream>
/* #include <vector> */
using namespace std;

int upperBound(vector<int> &arr, int x) {
  int low = 0;
  int high = arr.size() - 1;

  int ans = arr.size();

  while (low <= high) {
    int mid = low + (high - low) / 2;
    
    if (arr[mid] > x) {
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
  vector<int> arr = {1, 2, 3, 10, 14, 19};
  cout << upperBound(arr, 10) << endl;  
  int id = upper_bound(arr.begin(), arr.end(), 10) - arr.begin() ;
  cout << id << endl;
  return 0;
}
