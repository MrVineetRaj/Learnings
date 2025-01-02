#include <bits/stdc++.h>
using namespace std;

bool twoSum_first(vector<int> arr, int k, int n)
{
    sort(arr.begin(), arr.end());

    int left = 0, right = n - 1;

    while (left < right)
    {
        int sum = arr[left] + arr[right];

        if (sum == k)
        {
            return true;
        }

        if (sum > k)
        {
            right--;
        }
        if (sum < k)
        {
            left++;
        }
    }

    return false;
}

int twoSum_second(vector<int> arr, int k, int n)
{

    vector<pair<int, int>> ans;
    
    int count = 0;
    
    int i = 0;
    int j = n - 1;

    sort(arr.begin(),arr.end());

    while( i < j){
        int sum = arr[i] + arr[j];

        if(sum == k){
            ans.push_back({i,j});
            i++;
            j--;

            count++;
        }else if( sum > k){
            j--;
        }
        else{
            i++;
        }
    }

    return count;
}

// above solution will not work if there are duplicate elements

int twoSum_second_optimal(vector<int> arr,int k , int n){
    map<int,int> map;

    for(int i = 0 ; i < n ; i++){
        int a = arr[i];
        int more = k - a;

        if(map.find(more) != map.end()){

        }
    }
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

        cout << twoSum_second(arr, k, n) << endl;
    }
}

/*
5
5 4
1 -1 1 3 3
3 2
1 2 2
4 5
1 2 2 1
9 7
1 2 1 3 2 5 6 5 6
5 4
1 1 1 1 1
*/
