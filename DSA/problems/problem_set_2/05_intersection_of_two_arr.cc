#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionOfTwoSortedArr_brute(vector<int> arr1, vector<int> arr2)
{
    map<int, pair<bool, bool>> union_map;
    for (int it : arr1)
    {
        union_map[it].first = true;
    }
    for (int it : arr2)
    {
        union_map[it].second = true;
    }

    vector<int> ans;
    for (auto it : union_map)
    {
        if (it.second.first && it.second.second)
            ans.push_back(it.first);
    }

    return ans;
}

vector<int> intersectionOfTwoSortedArr_optimal(vector<int> arr1, vector<int> arr2)
{
    int i = 0;
    int j = 0;

    int n1 = arr1.size();
    int n2 = arr2.size();

    vector<int> ans;
    while (i < n1 && j < n2)
    {
        if (!ans.empty() && arr1[i] == ans.back())
        {
            i++;
            continue;
        }
        if (!ans.empty() && arr2[j] == ans.back())
        {
            j++;
            continue;
        }
        if (arr2[j] < arr1[i])
        {
            j++;
        }
        else if (arr2[j] > arr1[i])
        {
            i++;
        }
        else
        {
            if (!ans.empty() && ans.back() != arr1[i])
            {
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
            if (ans.empty())
            {
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
        }
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n1;
        cin >> n1;

        vector<int> arr1(n1);
        for (int i = 0; i < n1; i++)
        {
            cin >> arr1[i];
        }
        int n2;
        cin >> n2;

        vector<int> arr2(n2);
        for (int i = 0; i < n2; i++)
        {
            cin >> arr2[i];
        }

        vector<int> ans = intersectionOfTwoSortedArr_optimal(arr1, arr2);

        for (int it : ans)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
}

/*
2
5
1 2 3 5 8
6
1 2 3 4 4 7
5
1 2 3 4 5
8
0 1 2 4 4 5 6 14
*/