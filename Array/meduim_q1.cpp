#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

// Method 1. using unordered_set: all the elements in set should be unique, but unsorted.
void UI_using_u_Set(int arr[], int arr2[], int size1, int size2)
{
    int count = 0;
    unordered_set<int> s;
    vector<int> v;
    for (int i = 0; i < size1; i++)
    {
        s.insert(arr[i]);
    }
    for (int i = 0; i < size2; i++)
    {
        if (s.find(arr2[i]) == s.end())
        {
            s.insert(arr2[i]);
        }
        else
        {
            count++;
            v.push_back(arr2[i]);
        }
    }
    unordered_set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    vector<int>::iterator itv;
    for (itv = v.begin(); itv != v.end(); itv++)
    {
        cout << *itv << " ";
    }
    // cout << s.size() << endl; // size of the union.
    // cout << count;            // size of intersection.
}

//* Method 2 (Use Sorting and Searching)
// Union:

//1 Initialize union U as empty.
//2 Find smaller of m and n and sort the smaller array.
//3 Copy the smaller array to U.
//4 For every element x of larger array, do following
//5 Binary Search x in smaller array. If,,,, x is not present, then copy it to U.
//6 Return U.

// similar logic for itersection.

//* Method 3 sort both the arrays:
// 1) Use two index variables i and j, initial values i = 0, j = 0
// 2) If arr1[i] is smaller than arr2[j] then print arr1[i] and increment i.
// 3) If arr1[i] is greater than arr2[j] then print arr2[j] and increment j.
// 4) If both are same then print any of them and increment both i and j.
// 5) Print remaining elements of the larger array.

int main()
{
    int size1, size2;
    cin >> size1 >> size2;
    int arr1[size1], arr2[size2];
    for (int i = 0; i < size1; i++)
        cin >> arr1[i];
    for (int i = 0; i < size2; i++)
        cin >> arr2[i];
    UI_using_u_Set(arr1, arr2, size1, size2);
    return 0;
}