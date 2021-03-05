//  todo: find Largest sum contiguous Subarray [V. IMP]

#include <bits/stdc++.h>
using namespace std;

int maxArraySum(int arr[], int size)
{
    int max_so_far, curr_max = arr[0];
    for (int i = 1; i < size; i++)
    {
        curr_max = max(arr[i], curr_max + arr[i]);
        max_so_far = max(max_so_far, curr_max);
    }
    return max_so_far;
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
        int result = maxArraySum(arr, size);
        cout << result << endl;
    }
    return 0;
}
