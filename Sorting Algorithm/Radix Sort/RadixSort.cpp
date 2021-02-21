#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

//Time Complexity : O(n+10)
void countSort(int ar[], int size, int pos)
{
    int count[10] = {0}, output[size];
    for (int i = 0; i < size; i++)
        count[(ar[i] / pos) % 10] += 1;
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (int i = size - 1; i >= 0; i--)
    {
        output[count[(ar[i] / pos) % 10] - 1] = ar[i];
        count[(ar[i] / pos) % 10] -= 1;
    }
    for (int i = 0; i < size; i++)
        ar[i] = output[i];
}
void radixSort(int ar[], int size)
{
    int max_element = ar[0];
    for (int i = 1; i < size; i++)
        if (ar[i] > max_element)
            max_element = ar[i];

    for (int pos = 1; max_element / pos > 0; pos *= 10)
        countSort(ar, size, pos);
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
    radixSort(arr, n);
    cout << "\nArray after sorting:\n";
    printArray(arr, n);
    return 0;
}