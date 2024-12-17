#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    // step 1 : Select minimum from array and swap it with left most
    // Step 2 : Again find min swap it with second left most element
    // continue
    // Space complexity O(n)
    // time complexity O(n^2)
    int i = 0;
    while (i < n - 1)
    {
        int temp_min_i = i;
        for (int j = i; j < n; j++)
        {
            temp_min_i = arr[temp_min_i] > arr[j] ? j : temp_min_i;
        }

        swap(arr[i], arr[temp_min_i]);
        i++;
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";
}

void bubbleSort(vector<int> &arr, int n)
{
    // bubble sort name as it suggests here we create bubbles that contains two consecutive element and we just swap if they are unsorted
    // we shift the bubble by one index till last pair is swapped or checked
    // in one iteration largets element will reach right most iteration that is at index n-1
    // leter on we repeat these iterations to keep tile the last index which is not sorted
    // repeat...
    // at end array will be sorted

    // space complexity - O(1) Callng by refrence
    // time complexity - O(n + n-1 + n-2 + n-3 + ... + 1 ) ~ O(n^2) best/avg / worst complexity

    // to make it more optimal with best case of - O(n) time complexity
    // we will check if swaps ared done or not in iteration if not then no need to perform algo further

    int i = 0;
    int swaps = 0;
    while (i < n - 1)
    {
        swaps = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swaps++;
                swap(arr[j], arr[j + 1]);
            }
        }
        i++;
        if (swaps == 0)
        {
            cout << "Array is sorted at iteration " << i << endl;
            break;
        }
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";
}

void insertionSort(vector<int> arr, int n)
{
    // insertion sort is like we start from first element and check if it is sorted or not
    // if sorted leave it as it is
    // else right swap that element till it becomes sorted
    // repeat it untile all elements are sorted
    // time complexity
    //- O(n) = best case
    //- O(n^2) = avg/worst case
    // Space complexity - O(n) as calling the arr by value will not sort actual array will copy it and then sort it self

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            for (int j = i; j > 0; j--)
            {
                if (arr[j] >= arr[j - 1])
                {
                    break;
                }
                else
                {
                    swap(arr[j], arr[j - 1]);
                }
            }
        }
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";
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
        insertionSort(arr, n);
    }
}