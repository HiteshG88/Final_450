// todo: Merge 2 sorted arrays without using Extra space.
// https://www.youtube.com/watch?v=hVl2b3bLzBw

#include <iostream>
#include <algorithm>
using namespace std;

// Utility function to print contents of an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << '\n';
}

void naive_method(int X[], int Y[], int m, int n)
{
    int tempArr[m + n];
    for (int i = 0; i < m; i++)
        tempArr[i] = X[i];
    for (int i = 0; i < m + n; i++)
        tempArr[m + i] = Y[i];
    sort(tempArr, tempArr + m + n);
    for (int i = 0; i < m; i++)
        X[i] = tempArr[i];
    for (int i = 0; i < m + n; i++)
        Y[i] = tempArr[m + i];
}

// in-place merge two sorted arrays X[] and Y[]
// invariant: X[] and Y[] are sorted at any point
void insertion_method(int X[], int Y[], int m, int n)
{
    // consider each element X[i] of array X and ignore the element
    // if it is already in correct order else swap it with next smaller
    // element which happens to be first element of Y
    for (int i = 0; i < m; i++)
    {
        // compare current element of X[] with first element of Y[]
        if (X[i] > Y[0])
        {
            swap(X[i], Y[0]);
            int first = Y[0];

            // move Y[0] to its correct position to maintain sorted
            // order of Y[]. Note: Y[1..n-1] is already sorted
            int k;
            for (k = 1; k < n && Y[k] < first; k++)
            {
                Y[k - 1] = Y[k];
            }

            Y[k - 1] = first;
        }
    }
}

int main()
{
    int X[] = {1, 4, 7, 8, 10};
    int Y[] = {2, 3, 9};

    int m = sizeof(X) / sizeof(X[0]);
    int n = sizeof(Y) / sizeof(Y[0]);

    // insertion_method(X, Y, m, n);
    naive_method(X, Y, m, n);

    cout << "X: ";
    printArray(X, m);
    cout << "Y: ";
    printArray(Y, n);

    return 0;
}