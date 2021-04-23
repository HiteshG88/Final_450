// Q. https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1

#include <iostream>
#include <vector>
using namespace std;

vector<int> duplicates(int a[], int n)
{
    int b[n] = {0};
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        b[a[i]] += 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] > 1)
        {
            v.push_back(i);
        }
    }
    if (v.empty() == true)
    {
        v.push_back(-1);
        return v;
    }
    return v;
}
