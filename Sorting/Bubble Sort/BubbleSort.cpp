#include <iostream>
using namespace std;

void bubbleSort(int ar[], int l, int r)
{
    int size = r - l + 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
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
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Array before sorting:\n";
    printArray(arr, n);
    bubbleSort(arr, 0, n - 1);
    cout << "\nArray after sorting:\n";
    printArray(arr, n);
    return 0;
}