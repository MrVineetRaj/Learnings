#include <bits/stdc++.h>
using namespace std;

// brute->better->always
int largestElement_brute(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end()); // time complexity O(nlogn)
    return arr[n - 1];
}
int largestElement_optimal(vector<int> &arr, int n)
{
    int ans = INT32_MIN;
    int i = 0;

    do
    {
        ans = max(ans, arr[i]);
        i++;
    } while (i < n);

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

        int ans = largestElement_optimal(arr, n);
        cout << ans << "\n";
    }
}