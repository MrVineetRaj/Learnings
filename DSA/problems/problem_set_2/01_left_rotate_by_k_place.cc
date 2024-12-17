#include <bits/stdc++.h>
using namespace std;

void rotateArrByk_brute(vector<int> &arr, int n, int k) // t.c : O(n^2)
{
    int numberOfRotations = k % n;

    while (numberOfRotations--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void rotateArrByk_better(vector<int> &arr, int n, int k) // t.c : O(n) extra space = O(k%n) ~ O(n)
{
    int numberOfRotations = k % n;

    vector<int> temp;

    for (int i = 0; i < numberOfRotations; i++)
    {
        temp.push_back(arr[i]);
    }

    for (int i = numberOfRotations; i < n; i++)
    {
        arr[i - numberOfRotations] = arr[i];
    }

    for (int i = 0; i < numberOfRotations; i++)
    {
        arr[n - numberOfRotations + i] = temp[i];
    }
}

void reverseArr(vector<int> &arr, int start, int end) // T.C : O(n) , extra space : O(1)
{
    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }
}
void rotateArrByk_optimal(vector<int> &arr, int n, int k) // T.C : O(n) , extra space : O(1)
{
    int noOfRotations = k % n;
    reverseArr(arr, 0, noOfRotations - 1);
    reverseArr(arr, noOfRotations, n - 1);
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

        rotateArrByk_optimal(arr, n, k);

        for (int it : arr)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
}
