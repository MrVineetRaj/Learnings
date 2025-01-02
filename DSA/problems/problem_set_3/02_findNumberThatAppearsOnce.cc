/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.
*/

#include <bits/stdc++.h>
using namespace std;

int numberThatAppearOnce_brute(vector<int> &nums)
{
    int n = nums.size();

    for (auto it : nums)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (it == nums[i])
            {
                cnt++;
            }
        }

        if (cnt == 1)
        {
            return it;
        }
    }

    return -1;
}

int numberThatAppearOnce_better(vector<int> &nums)
{
    int n = nums.size();

    int maxElem = INT32_MIN;

    for (int it : nums)
    {
        maxElem = max(maxElem, it);
    }

    vector<int> hash(maxElem + 1, 0);

    for (int it : nums)
    {
        hash[it]++;
    }

    for (int i = 0; i < hash.size(); i++)
    {
        if (hash[i] == 1)
        {
            return i;
        }
    }

    return -1;
}

int numberThatAppearOnce_optimal_map(vector<int> &nums)
{
    unordered_map<long long, int> map(0);

    for (int it : nums)
    {
        map[it]++;
    }

    for (auto it : map)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    }

    return -1;
}

int numberThatAppearOnce_optimal(vector<int> &nums)
{
    // as all other elements appear twice;

    int xor_nums = nums[0];
    int n = nums.size();

    for (int i = 1; i < n; i++)
    {
        xor_nums ^= nums[i];
    }

    if (xor_nums == 0)
    {
        return -1;
    }

    return xor_nums;
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

        cout << numberThatAppearOnce_optimal(arr)
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
1 1 2 3 3
3
1 2 2
4
1 2 2 1
9
1 2 1 3 2 5 6 5 6
5
1 1 1 1 1
*/
