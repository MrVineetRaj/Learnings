#include <bits/stdc++.h>
using namespace std;

void rotateRightByK_brute(vector<int> &arr, int n, int k)
{
    k = k % n;
    int i = n - 1;
    while (k--)
    {
        while (i > 0)
        {
            swap(arr[i], arr[i - 1]);
            i--;
        }
        i = n - 1;
    }
}

void rotateRightByK_better(vector<int> &arr, int n, int k)
{
    vector<int> temp;
    int i = n - 1;
    k = k % n;
    int j = k;
    while (j--)
    {
        temp.push_back(arr[i--]);
        // 7 4 4 3
    }

    for (int x = n - 1; x >= k; x--)
    {
        arr[x] = arr[x - k];
    }

    for (int x = k - 1, i = 0; x >= 0 && i < k; x--, i++)
    {
        arr[x] = temp[i];
    }
}

void reverseArr(vector<int> &arr, int start, int end) // T.C : O(n) , extra space : O(1)
{
    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }
}
void rotateRightByK_optimal(vector<int> &arr, int n, int k) // T.C : O(n) , extra space : O(1)
{
    k = k % n;
    reverseArr(arr, 0, k );
    reverseArr(arr, k+1, n - 1);
    reverseArr(arr, 0, n - 1);
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        rotateRightByK_optimal(arr, n, k);

        for (int it : arr)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
}
