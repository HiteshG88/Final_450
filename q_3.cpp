// todo: Find the "Kth" max and min element of an array

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void k_min(int arr[], int size, int pos)
{
    sort(arr, arr + size);
    cout << arr[pos - 1] << endl;
}

void k_max(int arr[], int size, int pos)
{
    sort(arr, arr + size);
    cout << arr[size - pos] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        int pos;
        cin >> pos;
        k_min(arr, size, pos);
        k_max(arr, size, pos);
    }
    return 0;
}
