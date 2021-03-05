#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int func(int a[], int n, int k)
{
    int l = 0, h = n - 1, sum = 0;
    while (l < h)
    {
        cout << "in the loop";
        sum = a[l] + a[h];
        if (sum == k)
        {
            cout << l << " " << h << endl;
            return 1;
        }
        else if (sum < k)
        {
            l++;
        }
        else
        {
            h--;
        }
        sum = 0;
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter n of array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter k: ";
    bool k;
    cin >> k;

    cout << func(arr, n, k);

    cin.get();
}
