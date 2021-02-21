#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
            return i;
    }
    return -1;
}

int main()
{
    int n, el;
    cout << "Enter size of the array:";
    cin >> n;
    int ar[n];
    cout << "Enter elements:";
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    cout << "enter the element you want to search:";
    cin >> el;
    int pos = linearSearch(ar, n, el);
    if (pos != -1)
        cout << "element found at index :" << pos;
    else
        cout << "element not found!";
    return 0;
}