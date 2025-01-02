#include <bits/stdc++.h>
using namespace std;

int findMissing_brute(vector<int> arr, int n)
{
    for (int i = 0; i <= n; i++)
    {
        bool isExist = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                isExist = true;
                break;
            }
        }

        if (!isExist)
        {
            return i;
        }
    }

    return -1;
}

int findMissing_better(vector<int> arr, int n)
{
    vector<int> isExist(n + 1, 0);

    for (int it : arr)
    {
        isExist[it]++;
    }

    for (int i = 0; i < n + 1; i++)
    {
        if (isExist[i] == 0)
        {
            return i;
        }
    }

    return -1;
}

int findMissing_optimal(vector<int> arr, int n)
{
    int sumShouldBe = n * (n + 1) / 2;

    int sumIs = 0;

    for (int it : arr)
    {
        sumIs += it;
    }

    return sumShouldBe - sumIs;
}

int findMissing_optimal_xor(vector<int> arr, int n)
{
    int xor1 = 0;
    int xor2 = arr[0];
    for (int i = 1; i < n; i++)
    {
        xor1 ^= i;
        xor2 ^= arr[i];
    }

    xor1^=n;

    int ans_xor = xor1 ^ xor2;
    return ans_xor;
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

        cout << findMissing_optimal_xor(arr, n)
             << endl;

        // for (int it : arr)
        // {
        //     cout << it << " ";
        // }
        // cout << "\n";
    }
}

/*
4
5
0 1 5 2 4
6
0 1 2 4 3 6
5
0 5 2 1 4
8
7 4 0 2 3 8 5 6
*/
