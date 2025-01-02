#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll calcFact(ll n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return n * calcFact(n - 1);
}

bool isDivisibleBy7(ll n, int d)
{
    ll fact = calcFact(n);

    int number = d * (pow(10, fact) - 1) / 9;

    cout<<"\n IsDivisibleBy7 : "<<number%7<<endl;
    if (number % 7 == 0)
    {
        return true;
    }

    return false;
}

string solve(ll n, int d)
{
    ll fact = calcFact(n);

    string ans = "1 ";

    if ((fact * d) / 3)
    {
        ans += "3 ";
    }

    if (d % 5 == 0)
    {
        ans += "5 ";
    }

    if (n>=6)
    {
        ans += "7 ";
    }
    
    if ((fact * d) / 9)
    {
        ans += "9";
    }

    return ans;
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        int d;

        cin >> n >> d;

        cout << solve(n,d)<<"\n";

        // cout<<pow(10,4)<<"\n";

    }
}

/*

3
2 6
7 1
8 5

*/