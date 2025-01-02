#include <bits/stdc++.h>
using namespace std;

int numberOfDaysToCompleteJourney(int n, int a, int b, int c)
{
    int inThreeDays = a + b + c;
    int days = n / inThreeDays;
    int remaining = n % inThreeDays;
    if (remaining == 0)
    {
        return days * 3;
    }
    else
    {
        if (remaining <= a)
        {
            return days * 3 + 1;
        }
        else if (remaining <= a + b)
        {
            return days * 3 + 2;
        }
        else
        {
            return days * 3 + 3;
        }
    }

    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        cout << numberOfDaysToCompleteJourney(n, a, b, c) << endl;
    }
    return 0;
}

/*
4
12 1 5 3
6 6 7 4
16 3 4 1
1000000000 1 1 1

*/