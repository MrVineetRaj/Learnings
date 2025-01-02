#include <bits/stdc++.h>
using namespace std;

string examPreparation(int n, int m, int k, vector<int> &missing, vector<int> &known)
{
    string ans;

    // Case 1: knows too few questions
    if (k < n - 1)
    {
        return string(m, '0');
    }

    // Case 2: knows all questions
    if (k >= n)
    {
        return string(m, '1');
    }

    unordered_set<int> known_set(known.begin(), known.end());
    for (int i = 0; i < m; i++)
    {
        // If missing question is not in known set, can pass this list
        ans += (known_set.find(missing[i]) == known_set.end() ? '1' : '0');
    }

    return ans;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> arr_m(m), arr_k(k);

        for (int i = 0; i < m; i++)
        {
            cin >> arr_m[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin >> arr_k[i];
        }

        cout << examPreparation(n, m, k, arr_m, arr_k) << endl;
    }
}

/*
4
4 4 3
1 2 3 4
1 3 4
5 4 3
1 2 3 4
1 3 4
4 4 4
1 2 3 4
1 2 3 4
2 2 1
1 2
2

*/