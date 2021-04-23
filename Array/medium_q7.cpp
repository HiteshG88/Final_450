// Q. https://practice.geeksforgeeks.org/problems/common-elements5420/1

#include <iostream>
#include <vector>
using namespace std;

vector<int> common_element(vector<int> v1, vector<int> v2)
{
    int i = 0, j = 0;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    vector<int> ans;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] == v2[j])
        {
            ans.push_back(v1[i]);
            i++;
            j++;
        }
        else if (v1[i] < v2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

// if there are 3 vectors: //! incomplete/wrong:

vector<int> common_element(vector<int> v1, vector<int> v2, vector<int> v3)
{
    int i = 0, j = 0, k = 0;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    sort(v3.begin(), v3.end());
    vector<int> ans;
    while (i < v1.size() && j < v2.size() && k < v3.size())
    {
        if (v1[i] == v2[j] && v2[j] == v3[k])
        {
            ans.push_back(v1[i]);
            i++;
            j++;
            k++;
        }
        else if (v1[i] < v2[j])
        {
            if (v1[i] > v3[k])
            {
                k++;
            }
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}