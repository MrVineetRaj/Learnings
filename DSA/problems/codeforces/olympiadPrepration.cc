#include <bits/stdc++.h>
using namespace std;
int olympiadPreparation(int n, vector<int> a, vector<int> b)
{

    int maxDiff = 0;
    for (int i = 0; i < n - 1; i++)
    {
        maxDiff += a[i] - b[i + 1] > 0 ? a[i] - b[i + 1] : 0;
    }

    maxDiff += a[n - 1];

    return maxDiff;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        cout << olympiadPreparation(n, a, b) << endl;
    }
    return 0;
}

/*

4
2
3 2
2 1
1
5
8
3
1 1 1
2 2 2
6
8 2 5 6 2 6
8 2 7 4 3 4

*/