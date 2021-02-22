// todo: reverse an array of size n.

#include <iostream>
using namespace std;

void reverse_array(int arr[], int end)
{
    int start = 0;
    while (start < end)
    {
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }
}

int main()
{
    int n;
    cout << "Size of the array: ";
    cin >> n;
    int arr[n];
    cout << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    reverse_array(arr, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
    return 0;
}