#include <iostream>
#include <string>
using namespace std;

string countSay(int n)
{
    if (n == 0)
        return "1"; // base case

    string res = "1";
    while (n--)
    {
        string curr = ""; // empty string which will be filled for every n;

        for (int i = 0; i < res.size(); i++)
        {
            int count = 1;

            while (i + 1 < res.size() and res[i] == res[i + 1])
            {
                count++;
                i++; // increase i to check next char in result string
            }

            curr += to_string(count) + res[i]; // update curr
        }

        res = curr; // update result
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << countSay(i) << endl;
    }
}