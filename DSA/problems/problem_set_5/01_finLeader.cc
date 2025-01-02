#include <bits/stdc++.h>
using namespace std;

vector<int> findLeaders_brute(vector<int> &arr, int n)
{
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                isLeader = false;
            }
        }

        if (isLeader)
        {
            ans.push_back(arr[i]);
        }
    }

    return ans;
}

vector<int> findLeaders(vector<int> &arr, int n)
{
    int i = n - 2;
    vector<int> ans;
    // ans.push_back(arr[n-1]);

    int maximum = arr[n - 1];

    while (i >= 0)
    {
        if (arr[i] > maximum)
        {
            ans.push_back(maximum);
            maximum = arr[i];
        }
        i--;
    }

    ans.push_back(maximum);

    // reverse(ans.begin(), ans.end());

    return ans;
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

        vector<int> ans = findLeaders(arr, n);

        for (auto it : ans)
        {
            cout << it << " ";
        }

        cout << endl;
    }
}

/*

6
3
2 1 3
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