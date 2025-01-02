#include <bits/stdc++.h>
using namespace std;
void sortZerosOnesTwos_brute(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
}

void sortZerosOnesTwos_better(vector<int> &arr, int n)
{
    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;

    for (int a : arr)
    {
        if (a == 0)
        {
            countZero++;
        }
        else if (a == 1)
        {
            countOne++;
        }
        else
        {
            countTwo++;
        }
    }

    int i = 0;
    while (countZero--)
    {
        arr[i++] = 0;
    }
    while (countOne--)
    {
        arr[i++] = 1;
    }
    while (countTwo--)
    {
        arr[i++] = 2;
    }
}

// Dutch National Flag Algorithm ---> imp
void sortZerosOnesTwos_optimal(vector<int> &arr, int n)
{
    // three pointer approach  -> low , mid , high
    // everything at index from 0 to low -1 === 0
    // everything at index from low to mid - 1 === 1
    // everything at index from mid to high === some random elements (0,1,2)
    // everything at index from high+1 to n - 1 === 2

    int mid = 0, high = n - 1; // in starting everything is random
    int low = 0;               // as 0-1 index does not exist

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low++], arr[mid++]);
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high--]);
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

        sortZerosOnesTwos_optimal(arr, n);

        for (int it : arr)
        {
            cout << it << " ";
        }

        cout << endl;

        // cout << twoSum_second(arr, k, n) << endl;
    }
}
/*
6
5
1 0 1 2 0
3
1 2 0
4
1 2 2 1
9
1 2 1 0 2 0 0 0 1
5
1 1 1 1 1
11
0 1 1 0 1 2 1 2 0 0 0
*/
