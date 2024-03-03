#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
        // 1. take the first element 
        // 2. count the number of smaller numbers
        // 3. sorted index of that element will be start + count_of_small_number
    int smallerNum = 0;
    for (int i = start + 1; i <= end; i++)
        if(arr[i] <= arr[start])
            smallerNum++;

    int sortedIndex = start + smallerNum;

    swap(arr[start], arr[sortedIndex]);

    int i = start, j = end;
    while (i < sortedIndex && j > sortedIndex)
    {
        if (arr[i] > arr[sortedIndex] && arr[j] < arr[sortedIndex])
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        } 
        else 
        {
            if (arr[i] <= arr[sortedIndex]) i++;
            if (arr[j] > arr[sortedIndex]) j--;
        }
    }

    return sortedIndex;
}

void quickSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int sortedIndex = partition(arr, start, end);

    quickSort(arr, start, sortedIndex - 1);
    quickSort(arr, sortedIndex + 1, end);
}

int main()
{
    int arr[] = {7, 6, 5, 4, 3, 2, 1};

    quickSort(arr, 0, 6);

    for (int i = 0; i < 7; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}