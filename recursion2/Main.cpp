#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int> &arr, int start, int end)
{
	if (start >= end)
		return;

	int mid = (start + end) / 2;

	mergeSort(arr, start, mid);
	mergeSort(arr, mid + 1, end);

	vector<int> result(arr.size());
	int i = start;
	int j = mid + 1;
	int k = 0;

	while (i <= mid && j <= end)
	{
		if (arr[i] <= arr[j])
			result[k++] = arr[i++];
		else 
			result[k++] = arr[j++];
	}

	while(i <= mid)
		result[k++] = arr[i++];
	while (j <= end)
		result[k++] = arr[j++];

	int n = 0;
	for (int l = start; l <= end; l++)
		arr[l] = result[n++];
}

int main()
{
	vector<int> arr = {4, 3, 5, 1, 0};
	mergeSort(arr, 0, 4);
	for (int i : arr)
		cout << i << " ";
	cout << "\n";
    return 0;
}
