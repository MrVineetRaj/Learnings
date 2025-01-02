#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll countNumberOfCoins(ll n)
{
    if (n <= 3)
    {
        return 1;
    }

    return countNumberOfCoins(n / 4) * 2;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        cout << countNumberOfCoins(n) << endl;
    }
}

/*
4
3
5
16
1000000000000000000

*/