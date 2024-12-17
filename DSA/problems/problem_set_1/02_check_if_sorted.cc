#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &arr, int n) // time complexity = O(n)
{

    int i = 0;
    while(i < n-1){
        if(arr[i] > arr[i+1]){
            return false;
        }
        i++;
    }

    return true;
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

        bool ans = isSorted(arr, n);
        cout << ans << "\n";
    }
}