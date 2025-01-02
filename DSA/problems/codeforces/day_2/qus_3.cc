#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(vector<int> arr, ll n)
{
    set<ll> ans;
    ans.insert(0);
    int prefix_sum = 0;

    for (ll i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        ans.insert(prefix_sum);
        ll sum = 0;
        for (ll j = 0; j <= i; j++)
        {
            sum += arr[j];
            ans.insert(sum);
        }
    }

    cout << ans.size()<<endl;

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        solve(arr, n);
    }
}

/*
5
5
1 -1 10 1 1
5
-1 -1 -1 -1 -1
2
-1 2
2
7 1
3
1 4 -1
*/