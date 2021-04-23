// https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#
// solutuion: https://www.youtube.com/watch?v=8wrlCL6cvfQ

class Solution
{
public:
    int getPairsCount(int arr[], int n, int k)
    {
        // code here
        int count = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x = k - arr[i];
            if (m[x] == 0) // if the counterpart of sum exist in the map, by checking its frequency.
            {
                m[arr[i]]++; // increasing the frequency at key arr[i]
            }
            else
            {
                count += m[x];
                m[arr[i]]++; // increasing the frequency at key arr[i]
            }
        }
        return count;
    }
};