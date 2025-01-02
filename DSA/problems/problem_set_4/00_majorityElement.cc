#include <bits/stdc++.h>
using namespace std;

int majorityElement_brute(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
            }
            if (cnt > n / 2)
            {
                return arr[i];
            }
        }
    }

    return -1;
}

int majorityElement_better(vector<int> arr, int n)
{
    unordered_map<int, int> freq;

    for (int it : arr)
    {
        freq[it]++;
    }

    for (auto it : freq)
    {
        if (it.second > n / 2)
        {
            return it.first;
        }
    }

    return -1;
}

// Moore's Voting Algorithm   ->>>> not understood
int majorityElement_optimal(vector<int> arr, int n)
{
    // two variables will be used element and count;
    // Assumption that

    int element = arr[0];
    int cnt = 0;

    int i = 0;

    while (i < n)
    {
        if (cnt == 0)
        {
            element = arr[i];
            cnt = 1;
        }
        if (arr[i] == element)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }

        i++;
    }

    int cnt1 = 0;

    for(int it:arr){
        if(it == element){
            cnt1++;
        }
    }

    if(cnt1 > n/2){
        return element;
    }

    return -1;
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

        cout << majorityElement_optimal(arr, n) << endl;
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
1 2 1 3 2 5 6 5 6
5
1 1 1 1 1
16
7 7 5 7 5 1 5 7 5 5 7 7 5 5 5 5
*/
