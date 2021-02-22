// todo: Minimum no. of Jumps to reach end of an array
//  https://www.youtube.com/watch?v=jH_5ypQggWg

#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{
    int jump_Arr[n];
    jump_Arr[0] = 0;
    for (int i = 0; i < n; i++)
    {
        jump_Arr[i] = INT_MAX;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i <= j + arr[j])
            {
                jump_Arr[i] = min(jump_Arr[i], jump_Arr[j] + 1);
            }
        }
    }
    return jump_Arr[n - 1];
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
            cin >> arr[i];
        auto result = minJumps(arr, size);
        cout << result << endl;
    }
    return 0;
}