#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int longestSubArrayWithSumK_brute(vector<ll> nums, int k)
{
    int n = nums.size();
    int maxLen = INT32_MIN;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            if (sum == k)
            {
                maxLen = max(maxLen, j - i + 1);
            }
            else if (sum > k)
            {
                break;
            }
        }
    }
    return maxLen;
}

int longestSubArrayWithSumK_better(vector<ll> nums, int k)
{
    //  concept of prefix sum
    // Reverse Mathematics

    //  like if a prefix sum is = x
    //  and for first a elements sum is  k then for rest of the elements of the prefix is k

    unordered_map<ll, int> preSumMap;

    ll sum = 0;

    int maxLen = 0;

    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }

        ll rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

// if array does consist negative then previous solution is optimal

// but if array has only zero and positive then below solution is optimal
// below solution is using two pointer approach
int longestSubArrayWithSumK_optimal(vector<ll> nums, int k)
{
    int i = 0;
    int j = i;
    int n = nums.size();

    int sum = 0;
    int maxLen = 0;

    // k = 4
    //  j :: 0 -> 1 -> 2 -> 3 -> 4
    //  sum :: 0 -> 1 -> 1 -> 2 -> 5 ->
    // maxLen :: 0 ->
    while (j < n && i < n)
    {
        if (sum <= k)
        {
            if (sum == k)
            {
                int len = j - i + 1;
                maxLen = max(maxLen, len);
            }

            sum += nums[j];
            
            if (sum < k)
            {
                j++;
            }
        }
        if (sum > k)
        {
            sum -= nums[i++];
        }
    }

    return maxLen;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << longestSubArrayWithSumK_optimal(arr, k) << endl;
    }
}

/*
5
5 4
1 0 1 3 3
3 2
1 2 2
4 5
1 2 2 1
9 7
1 2 1 3 2 5 6 5 6
5 4
1 1 1 1 1
*/
