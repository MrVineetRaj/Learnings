#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates_brute(vector<int> &arr, int n)
// Time complexity  O(nlogn)  - insertion time for element insertion in set
//  T.C  O(n) - time to travers for result
// Overall O(nlogn + n)
{
    set<int> s;

    for (int it : arr)
    {
        s.insert(it);
    }

    vector<int> ans;
    for (auto it : s)
    {
        ans.push_back(it);
    }

    return ans;
}

vector<int> removeDuplicates_optimal(vector<int> &arr, int n)
{
    if (n == 0)
        return {}; // Handle edge case for empty array

    int i = 0; // Pointer for the position of unique elements

    for (int j = 1; j < n; j++) // this loops is used to skip the index of duplicate elements
    {
        if (arr[j] != arr[i]) // If the current element is unique
        {
            i++;
            arr[i] = arr[j]; // Move unique element to the next position
        }
    }

    // Return only the first (i+1) elements as the unique array
    vector<int> ans(arr.begin(), arr.begin() + i + 1);
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

        vector<int> ans = removeDuplicates_optimal(arr, n);

        for (int it : ans)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
}

/*
5
5
5 1 3 4 8
6
4 7 4 1 2 3
5
1 2 3 4 5
8
4 5 2 14 6 0 1 4
10
1 1 1 1 1 1 1 1 1 1
*/