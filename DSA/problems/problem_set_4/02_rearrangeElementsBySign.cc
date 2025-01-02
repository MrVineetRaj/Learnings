#include <bits/stdc++.h>
using namespace std;

void rearrangeElementBySign_brute(vector<int> &arr, int n)
{
    vector<int> pos;
    vector<int> neg;

    int i = 0;

    while (i < n)
    {
        if (arr[i] > 0)
        {
            pos.push_back(arr[i++]);
        }
        else
        {
            neg.push_back(arr[i++]);
        }
    }

    int j = 0, k = 0;
    i = 0;
    while (k < pos.size() && j < neg.size())
    {
        if (i % 2 == 0)
        {
            arr[i++] = pos[k++];
        }
        else
        {
            arr[i++] = neg[j++];
        }
    }

    while (k < pos.size())
    {
        arr[i++] = pos[k++];
    }
    while (j < neg.size())
    {
        arr[i++] = neg[j++];
    }
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

        rearrangeElementBySign_brute(arr, n);

        for (auto it : arr)
        {
            cout << it << " ";
        }

        cout << endl;
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
1 2 1 -3 -2 5 6 -5 6
5
1 1 -1 -1 1
8
-2 -3 4 -1 -2 1 5 -3
*/