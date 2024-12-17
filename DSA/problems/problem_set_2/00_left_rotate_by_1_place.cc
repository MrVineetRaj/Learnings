#include <bits/stdc++.h>
using namespace std;

void rotateArrByOne(vector<int> &arr, int n) // space used here = O(n) , extra space is O(1)
{
    int firstElement = arr[0];

    for (int i = 0; i < n - 1; i++)
    {
        swap(arr[i], arr[i + 1]);
    }

    arr[n - 1] = firstElement;
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

        rotateArrByOne(arr, n);

        for (int it : arr)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
}
