#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isMaxGCD(ll l, ll r, ll g)
{
    return (r - l) % g == 0;
}

pair<ll, ll> solve(ll l, ll r, ll g, ll gcd)
{
    if (isMaxGCD(l, r, g))
    {
        return {l, r};
    }
    else
    {
        ll new_l = l + (g - l % g);
        ll new_r = r - (r % g);
        if (new_l > new_r)
        {
            return {-1, -1};
        }
        else
        {
            return {new_l, new_r};
        }
    }
}
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll l, r, g;
        cin >> l >> r >> g;

        pair<ll, ll> ans = solve(l, r, g, g);
        cout << ans.first << " " << ans.second << endl;
    }
}