#include <bits/stdc++.h>
using namespace std;

int countOnes(vector<int> &nums)
{
    int n = nums.size();

    int maxCnt = INT32_MIN;
    int cnt = 0;
    for (int it : nums)
    {
        if (it == 1)
        {
            cnt++;
        }
        else
        {
            maxCnt = max(maxCnt, cnt);
            cnt = 0;
        }
    }

    maxCnt = max(maxCnt, cnt);
    return maxCnt;
}

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

        cout << countOnes(arr)
             << endl;

        // for (int it : arr)
        // {
        //     cout << it << " ";
        // }
        // cout << "\n";
    }
}

/*
5
5
1 1 0 1 1
6
1 1 1 1 0 1
5
0 0 0 0 0
8
1 0 1 1 1 0 1 1
6
1 1 0 1 1 1
*/
