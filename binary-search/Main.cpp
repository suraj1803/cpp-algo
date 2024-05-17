#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &arr, int target, int start, int end) {
  if (start > end)  {
    return -1;
  }
  
  int mid = start + (end - start) / 2;
  if (arr[mid] == target) 
    return mid;
  else if (arr[mid] > target)
    return search(arr, target, start, mid - 1);
  else
    return search(arr, target, start + 1, end);
}

int main()
{
  vector<int> arr = {1, 2, 6 , 8};
  cout << search(arr, 8, 0, arr.size() - 1) << endl;

  return 0;
}
