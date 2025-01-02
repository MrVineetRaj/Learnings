#include <bits/stdc++.h>
using namespace std;

int longestSubsequence_brute(vector<int> arr, int n)
{
    int maxLen = 1;

    for (int i = 0; i < n; i++)
    {
        int prev = arr[i];
        int len = 1;
        bool isNextExists = true;

        while (isNextExists)
        {
            isNextExists = false;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == prev + 1)
                {
                    len++;
                    isNextExists = true;
                    prev++;
                    break;
                }
            }

            maxLen = max(len, maxLen);
        }
    }

    return maxLen;
}

int longestSubsequence_better(vector<int> arr, int n)
{
    sort(arr.begin(), arr.end());

    int maxLen = 1;

    // 2 1 3     ->  1 2 3
    int i = 0;
    int prev = INT32_MIN;
    int len = 1;
    while (i < n)
    {
        if (prev + 1 == arr[i])
        {
            len++;
        }
        else
        {
            maxLen = max(len, maxLen);
            len = 1;
        }
        prev = arr[i];
        i++;
    }

    maxLen = max(len, maxLen);
    return maxLen;
}

int longestSubsequence_optimal(vector<int> arr, int n)
{
    unordered_set<int> s;

    for (auto it : arr)
    {
        s.insert(it);
    }

    int first = arr[0];
    int maxLen = 1;
    for (auto it : s)
    {
        if (s.find(it - 1) == s.end())
        {
            int len = 0;
            while (s.find(it) != s.end())
            {
                len++;
                it++;
            }

            maxLen = max(maxLen,len);
        }
    }

    return maxLen;
}


//  3 2 1 104 103 102 101


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << longestSubsequence_optimal(arr, n);

        // for (auto it : ans)
        // {
        //     cout << it << " ";
        // }

        cout << endl;
    }
}

/*
6
3
2 1 3     ->  1 2 3
4
1 1 1 1
2
2 1
6
8 7 5 4 3 1
7
2 1 5 4 3 0 0
6
10 22 12 3 0 6
*/