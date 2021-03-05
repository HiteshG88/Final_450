// todo: Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include <iostream>
#include <vector>
using namespace std;

void sorting_0_1_2(int arr[], int size)
{
    vector<int> a_0;
    vector<int> a_1;
    vector<int> a_2;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            a_0.push_back(arr[i]);
        if (arr[i] == 1)
            a_1.push_back(arr[i]);
        if (arr[i] == 2)
            a_2.push_back(arr[i]);
    }
    for (int i = 0; i < a_0.size(); i++)
    {
        cout << a_0[i] << " ";
    }
    for (int i = 0; i < a_1.size(); i++)
    {
        cout << a_1[i] << " ";
    }
    for (int i = 0; i < a_2.size(); i++)
    {
        cout << a_2[i] << " ";
    }
}

//  two pointer method used.
//  https://www.youtube.com/watch?v=v3koF1ap6KI (for logic)
void swap_sorting(int arr[], int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
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
        if (arr[i] == 1)
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
        cout << arr[i] << " ";

    cout << endl;
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
        // sorting_0_1_2(arr, size);
        swap_sorting(arr, size);
    }
}
