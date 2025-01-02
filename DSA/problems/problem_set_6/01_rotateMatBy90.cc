#include <bits/stdc++.h>
using namespace std;

void rotateMat_brute(vector<vector<int>> mat, int n)
{
    vector<vector<int>> ans(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[j][n - 1 - i] = mat[i][j];
        }
    }

    for (auto row : ans)
    {
        for (auto it : row)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
}

void transpose(vector<vector<int>> &mat, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
}
void rotateMat(vector<vector<int>> &mat, int n)
{
    transpose(mat,n);
    

    // Reversing every row

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n/2; j++)
        {
            swap(mat[i][j], mat[i][n - 1 - j]);
        }
        
    }
    
    for (auto row : mat)
    {
        for (auto it : row)
        {
            cout << it << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> mat(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
            }
        }

        rotateMat(mat, n);

        cout << "\n";
    }
}

/*
2
4
01 02 03 04
05 06 07 08
09 10 11 12
13 14 15 16

5
01 02 03 04 05
06 07 08 09 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/