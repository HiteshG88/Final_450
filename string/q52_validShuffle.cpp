#include <iostream>
#include <string>
using namespace std;

void checkShuffle(string s1, string s2, string s3)
{
    if (s3.length() != (s1.length() + s2.length()))
    {
        cout << "No";
    }

    int i = 0, j = 0, k = 0;

    while (k < s3.length())
    {
        if (i < s1.length() && s1[i] == s3[k])
            i++;
        else if (j < s2.length() && s2[j] == s3[k])
            j++;
        else
        {
            cout << "no1";
            return;
        }
        k++;
    }
    if (i < s1.length() || j < s2.length())
        cout << "no2";
    cout << "yes";
}

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    checkShuffle(s1, s2, s3);
}