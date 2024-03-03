#include <iostream>
using namespace std;

void mergeSort(int arr[], int start, int end)
{
    if (start == end)
        return;

    int mid = (start + end) / 2;
    
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    int size = end - start + 1;
    int *res = new int[size];
    int i = start;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
            res[k++] = arr[i++];
        else 
            res[k++] = arr[j++];
    }

    while (i <= mid)
        res[k++] = arr[i++];

    while (j <= end)
        res[k++] = arr[j++];
    
    int m = 0;
    for (int l = start; l <= end; l++)
        arr[l] = res[m++];

    delete[] res;
}

int main()
{
    int arr[] = {5, 4, 3, 0, 2, 1};
    mergeSort(arr, 0, 5);
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}