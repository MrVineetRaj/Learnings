#include <bits/stdc++.h>
using namespace std;

void nextPermutation_better(vector<int> &arr, int n)
{
    next_permutation(arr.begin(), arr.end());
}

void nextPermutation_optimal(vector<int> &arr, int n)
{
    int i = n - 2;

    // Step 1: Find the first decreasing element from the right
    while (i >= 0 && arr[i] >= arr[i + 1])
    {
        i--;
    }

    if (i >= 0)
    {
        // Step 2: Find the smallest element larger than arr[i] to the right
        int j = n - 1;
        while (arr[j] <= arr[i])
        {
            j--;
        }

        // Step 3: Swap arr[i] and arr[j]
        swap(arr[i], arr[j]);
    }

    // Step 4: Reverse the elements to the right of index i
    reverse(arr.begin() + i + 1, arr.end());
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

        nextPermutation_optimal(arr, n);

        for (int it : arr)
        {
            cout << it << " ";
        }

        cout << "\n";
    }
}

/*
5
3
2 1 3
4
1 1 1 1
2
2 1
6
8 7 5 4 3 1
7
2 1 5 4 3 0 0
*/