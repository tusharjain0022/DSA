#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int element)
{
    int start = 0, end = size - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (array[mid] == element)
            return mid;
        else if (array[mid] < element)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int n, el;
    cout << "Enter size of the array:";
    cin >> n;
    int ar[n];
    cout << "Enter elements in sorted manner:";
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    cout << "enter the element you want to search:";
    cin >> el;
    int pos = binarySearch(ar, n, el);
    if (pos != -1)
        cout << "element found at index :" << pos;
    else
        cout << "element not found!";
    return 0;
}