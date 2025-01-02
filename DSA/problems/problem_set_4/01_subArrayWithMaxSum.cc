#include <bits/stdc++.h>
using namespace std;

int maxPossibleSumOfSubArrray_brute(vector<int> arr, int n)
{
    int maxSum = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }

    return maxSum;
}

// kadane algo ------> very very very -> imp
int maxPossibleSumOfSubArrray_optimal(vector<int> arr, int n)
{
    int maxSum = INT32_MIN;

    int sum = 0;
    pair<int, int> range({0, n - 1});

    int tempStart = 0;
    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
        maxSum = max(maxSum, sum);
        if (maxSum == sum)
        {
            range = {tempStart,i};
        }
        if (sum <= 0)
        {
            sum = 0;
            if (i + 1 < n)
                tempStart = i + 1;
        }
    }

    for (int i = range.first; i <= range.second; i++)
    {
        cout << arr[i] << " ";
    }

    cout << " : ";

    return maxSum;
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

        cout << maxPossibleSumOfSubArrray_optimal(arr, n) << endl;
    }
}

/*
6
5
1 -1 1 3 1
3
1 2 2
4
1 2 2 1
9
1 2 1 -3 -2 5 6 -5 6
5
1 1 -1 -1 1
8
-2 -3 4 -1 -2 1 5 -3
*/