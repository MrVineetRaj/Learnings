#include <bits/stdc++.h>
using namespace std;

int largestSecond_brute(vector<int> arr, int n) // time complexity = O(nlogn + n)
{
    sort(arr.begin(), arr.end());

    int i = n - 1;

    while (i > 0)
    {
        if (arr[i] == arr[i - 1])
        {
            i--;
        }
        else if (arr[i] > arr[i - 1])
        {
            return arr[i - 1];
        }
    }

    return -1;
}

int largestSecond_optimal(vector<int> arr, int n) // time complexity = O(n)
{
    pair<int, int> largest_two{-1, -1}; // {largest,second_largest}

    for (int it : arr)
    {
        if (it > largest_two.first)
        {
            largest_two.second = largest_two.first;
            largest_two.first = it;
        }
        if (it < largest_two.first && it > largest_two.second)
        {
            largest_two.second = it;
        }
    }

    return largest_two.second;
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

        int ans = largestSecond_optimal(arr, n);
        cout << ans << "\n";
    }
}