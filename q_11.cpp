// todo: find duplicate in an array of N+1 Integers
// https://leetcode.com/problems/find-the-duplicate-number/

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// * timeComplexity: O(nlogn), spaceComplexity O(1)
int naive_method(int arr[], int size)
{
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        int x = arr[i] int y = arr[i + 1];
        if (x == y)
            return x;
    }
    return
}

// * timeComplexity: O(n), spaceComplexity O(n)
int hashing_method(int arr[], int size)
{
    int frequency_arr[size] = {0};
    for (int i = 0; i < size; i++)
    {
        int pos = arr[i];
        if (frequency_arr[pos] == 1)
            return pos;
        else
            frequency_arr[pos] = 1;
    }
    return -1;
}

// * timeComplexity: O(n), spaceComplexity O(1) BEST METHOD:
// https://www.youtube.com/watch?v=32Ll35mhWg0
int linkListCycle_method(int nums[], int size)
{
    int slow = nums[0];
    int fast = nums[0];
    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    fast = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int result_1 = naive_method(arr, size);
    int result_2 = linkListCycle_method(arr, size);
    int result_3 = hashing_method(arr, size);
    cout << result_1 << " ";
    cout << result_2 << " ";
    cout << result_3 << " ";
    return 0;
}