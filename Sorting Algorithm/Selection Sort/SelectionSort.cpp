#include <iostream>
using namespace std;

void selectionSort(int ar[], int l, int r)
{
    int size = r - l + 1;
    for (int i = 0; i < size; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < size; j++)
        {
            if (ar[j] < ar[min_pos])
                min_pos = j;
        }
        int temp = ar[i];
        ar[i] = ar[min_pos];
        ar[min_pos] = temp;
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
    selectionSort(arr, 0, n - 1);
    cout << "\nArray after sorting:\n";
    printArray(arr, n);
    return 0;
}