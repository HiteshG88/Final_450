// todo: Move all the negative elements to one side of the array

#include <bits/stdc++.h>
using namespace std;

// * two pointer method used.
// * also refer to q_4.
// * time complexity 0(n)
void swapNegativePositive(int arr[], int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            if (i == j)
                j++;
            else
            {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
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
        cin >> arr[i];
    swapNegativePositive(arr, size);
}


