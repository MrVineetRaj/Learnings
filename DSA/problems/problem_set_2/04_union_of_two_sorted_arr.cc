#include <bits/stdc++.h>
using namespace std;

vector<int> unionOfTwoSortedArr_brute(vector<int> arr1, vector<int> arr2)
{
    set<int> union_set;
    for (int it : arr1)
    {
        union_set.insert(it);
    }
    for (int it : arr2)
    {
        union_set.insert(it);
    }

    vector<int> ans;
    for (auto it : union_set)
    {
        ans.push_back(it);
    }

    return ans;
}

vector<int> unionOfTwoSortedArr_optimal(vector<int> arr1, vector<int> arr2)
{
    int i = 0, j = 0;
    int n1 = arr1.size(), n2 = arr2.size();
    vector<int> ans;

    while (i < n1 && j < n2)
    {
        // Avoid duplicates in ans
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

        // Compare and push the smaller element
        if (arr1[i] < arr2[j])
        {
            ans.push_back(arr1[i++]);
        }
        else if (arr1[i] > arr2[j])
        {
            ans.push_back(arr2[j++]);
        }
        else
        {
            // If both elements are equal, push only one
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    // Add remaining elements from arr1
    while (i < n1)
    {
        if (ans.empty() || arr1[i] != ans.back())
        {
            ans.push_back(arr1[i]);
        }
        i++;
    }

    // Add remaining elements from arr2
    while (j < n2)
    {
        if (ans.empty() || arr2[j] != ans.back())
        {
            ans.push_back(arr2[j]);
        }
        j++;
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

        vector<int> ans = unionOfTwoSortedArr_optimal(arr1, arr2);

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

