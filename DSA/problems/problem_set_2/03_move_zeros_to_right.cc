#include <bits/stdc++.h>
using namespace std;

void moveZeroRight_brute(vector<int> &arr, int n)
{
    vector<int> nonZeros;
    vector<int> zeros;

    for (int it : arr)
    {
        if (it == 0)
        {
            zeros.push_back(0);
        }
        else
        {
            nonZeros.push_back(it);
        }
    }

    int i = 0;
    for (int x = 0; x < nonZeros.size(); x++)
    {
        arr[i++] = nonZeros[x];
    }

    for (int y = 0; y < zeros.size(); y++)
    {
        arr[i++] = zeros[y];
    }
}

void moveZeroRight_optimal(vector<int> &arr, int n)
{
    int i = 0; // Pointer for the position to place the next non-zero element

    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0) // If the current element is non-zero
        {
            swap(arr[i], arr[j]); // Place it in the correct position
            i++;                  // Move the pointer to the next position
            // here i tracks the zero and j tacks the non zero
        }
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

        moveZeroRight_optimal(arr, n);

        for (int it : arr)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
}

/*
5
5 2
1 2 3 5 8
6 4
1 2 3 4 4 7
5 8
1 2 3 4 5
8 99523
0 1 2 4 4 5 6 14
10 99523
1 1 1 1 1 1 1 1 1 1
*/