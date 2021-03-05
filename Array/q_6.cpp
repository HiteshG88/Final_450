// todo: Find the Union and Intersection of the two sorted arrays.

#include <bits/stdc++.h>
using namespace std;

void findUnionIntersection(int arr[], int size)
{
    sort(arr, arr + size);
    int U_count = 0;
    int I_count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] != arr[i + 1])
            U_count++;
        else
            I_count++;
    }
    cout << U_count + 1;
    cout << endl;
    // cout
    //     << " " << I_count + 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int size = n + m;
        int arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        findUnionIntersection(arr, size);
    }
}
