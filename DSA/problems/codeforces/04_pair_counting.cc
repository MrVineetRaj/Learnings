#include <bits/stdc++.h>
using namespace std;

int countPairs(long long n, long long x, long long y, vector<long long> &arr)
{
    // Add constraints from problem
    if (n < 3)
        return 0; // n must be ≥ 3
    if (x > y)
        return 0;

    int count = 0;
    long long total = 0;

    for (long long num : arr)
    {
        // cout << num << " ";
        total += num; // Cast to long long before adding
    }
    // cout << endl;

    // cout << "Total sum: " << total << endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            long long remaining = total - (long long)arr[i] - (long long)arr[j];
            if (remaining >= x && remaining <= y)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << countPairs(n, x, y, arr) << endl;
    }
    return 0;
}