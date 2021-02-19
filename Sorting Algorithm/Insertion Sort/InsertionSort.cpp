#include <iostream>
using namespace std;

void insertionSort(int ar[], int l, int r)
{
    for (int i = l; i <= r; i++)
    {
        int key = ar[i];
        int j = i;
        while (ar[j - 1] > key && j >= 1)
        {
            ar[j] = ar[j - 1];
            j--;
        }
        ar[j] = key;
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
    insertionSort(arr, 0, n - 1);
    cout << "\nArray after sorting:\n";
    printArray(arr, n);
    return 0;
}