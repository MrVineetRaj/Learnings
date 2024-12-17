#include <bits/stdc++.h>
using namespace std;
int linearSearch(vector<int> &arr, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, target;
        cin >> n >> target;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << linearSearch(arr, n, target)
             << endl;

        // for (int it : arr)
        // {
        //     cout << it << " ";
        // }
        // cout << "\n";
    }
}
