// todo: Minimise the maximum difference between heights [V.IMP]
// C++ program to find the minimum possible
// difference between maximum and minimum
// elements when we have to add/subtract
// every number by k
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {

        if (n == 1)
            return 0;

        sort(arr, arr + n); // * O(nlog(n))

        // The option is to minimize the heights by either choosing or not choosing the k
        // If we don't choose to use k then arr[n-1] and arr[0] are the max and min height.
        // So minimum of these two are taken later.
        int ans = arr[n - 1] - arr[0];

        int big = arr[n - 1] - k; // Possible big
        int small = arr[0] + k;   //possible min

        if (small > big)
            swap(big, small);

        for (int i = 1; i < n - 1; i++)
        {
            int add = arr[i] + k;
            int substract = arr[i] - k;

            // As we are trying to minimize the height, we don't have to choose the minimum or maximum height
            // out of the options, if the add is smaller than big, then we choose this or if it is greater than small we choose that.
            // so we ignore for the following case
            if (add <= big || substract >= small)
                continue; // continue forces the next iteration of the loop.

            // If it fails to go to the above case, then we can't ignore the element
            // We try to minimize the height by picking add or substract, which gives the minimum height.
            // Either subtraction causes a smaller
            // number or addition causes a greater
            // number. Update small or big using
            // greedy approach (If big - subtract
            // causes smaller diff, update small
            // Else update big)
            if (big - substract <= add - small)
                small = substract;
            else
                big = add;
        }
        return min(ans, big - small);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        Solution ob;
        auto ans = ob.getMinDiff(arr, size, k);
        cout << ans << endl;
    }
    return 0;
}

// * time complexity O(n*log(n))