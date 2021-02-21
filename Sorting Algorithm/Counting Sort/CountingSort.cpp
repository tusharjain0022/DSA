#include <iostream>
using namespace std;

int k = 10001;

void countingSort(int ar[], int l, int r)
{
    int c[k];
    int b[r - l];
    for (int i = 0; i < k; i++)
        c[i] = 0;
    for (int i = l; i <= r; i++)
        c[ar[i]] += 1;
    for (int i = 1; i < k; i++)
        c[i] += c[i - 1];
    for (int i = r; i >= l; i--)
    {
        b[c[ar[i]] - 1] = ar[i];
        c[ar[i]] -= 1;
    }
    for (int i = l; i <= r; i++)
        ar[i] = b[i];
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
    countingSort(arr, 0, n - 1);
    cout << "\nArray after sorting:\n";
    printArray(arr, n);
    return 0;
}