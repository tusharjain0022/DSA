#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int size = right - left + 1;
    int temp[size];
    int first_ptr = left;
    int second_ptr = mid + 1;
    int third_ptr = 0;
    while (first_ptr < second_ptr && first_ptr <= mid && second_ptr <= right)
    {
        if (arr[first_ptr] <= arr[second_ptr])
        {
            temp[third_ptr] = arr[first_ptr];
            third_ptr++;
            first_ptr++;
        }
        else
        {
            temp[third_ptr] = arr[second_ptr];
            third_ptr++;
            second_ptr++;
        }
    }
    while (first_ptr <= mid)
    {
        temp[third_ptr] = arr[first_ptr];
        third_ptr++;
        first_ptr++;
    }
    while (second_ptr <= right)
    {
        temp[third_ptr] = arr[second_ptr];
        third_ptr++;
        second_ptr++;
    }
    third_ptr = 0;
    for (int i = left; i <= right; i++)
    {
        arr[i] = temp[third_ptr];
        third_ptr++;
    }
}
void mergeSort(int arr[], int left, int right)
{
    if (left >= right)
    {
        return;
    }
    else
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int n;
    cout << "Enter size of array:";
    cin >> n;
    cout << "Enter array elements:";
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Array before sorting:\n";
    printArray(arr, n);
    mergeSort(arr, 0, n - 1);
    cout << "\nArray after sorting:\n";
    printArray(arr, n);
    return 0;
}