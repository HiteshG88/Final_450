#include <iostream>
using namespace std;

int *shiftAll(int arr[], int size)
{
    int l = 0, r = size - 1;
    while (l <= r)
    {

        if (arr[l] < 0 && arr[r] < 0)
        {
            l++;
        }
        else if (arr[l] > 0 && arr[r] < 0)
        {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
        else if (arr[l] > 0 && arr[r] > 0)
        {
            r--;
        }
        else
        {
            l++;
            r--;
        }
    }
    return arr;
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int *arr2 = shiftAll(arr, size);
    printArr(arr2, size);

    return 0;
}