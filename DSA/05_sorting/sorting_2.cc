#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> sorted;

    int i = low;
    int j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            sorted.push_back(arr[i++]);
        }
        else
        {
            sorted.push_back(arr[j++]);
        }
    }

    while (i <= mid)
    {
        sorted.push_back(arr[i++]);
    }
    while (j <= high)
    {
        sorted.push_back(arr[j++]);
    }

    for (int k = low; k <= high; k++)
    {
        arr[k] = sorted[k - low];
    }
}
void mergeSort(vector<int> &arr, int low, int high)
{
    // divide and merge basic principle
    // time complexity of mergeSort call - O(logn)
    // time complexity of merge call - O(n)
    // total time complexity - O(nlogn)
    // spacecomplexity O(N)

    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);

    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int pivot = low;

    int countMin = 0;
    for (auto it : arr)
    {
        if (it < arr[pivot])
        {
            countMin++;
        }
    }

    swap(arr[countMin], arr[pivot]);

    pivot = countMin;

    int i = low;
    int j = high;

    while (i < j)
    {
        if (arr[i] <= arr[pivot] && i < high)
        {
            i++;
        }
        if (arr[j] > arr[pivot] && j > low)
        {
            j--;
        }
        if (arr[i] > arr[pivot] && arr[j] <= arr[pivot])
        {
            swap(arr[i++], arr[j--]);
        }
    }

    quickSort(arr, low, countMin - 1);
    quickSort(arr, countMin + 1, high);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        int i = n;
        while (i--)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }


        quickSort(arr, 0, n - 1);

        for(int it: arr){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}

/*
4
5
5 1 3 4 8
6
4 7 4 1 2 3
5
1 2 3 4 5
8
4 5 2 14 6 0 1 4
*/