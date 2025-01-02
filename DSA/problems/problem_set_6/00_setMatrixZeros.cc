#include <bits/stdc++.h>
using namespace std;

void setMatrixZeros_brute(vector<vector<int>> &mat, int n) // n^3
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    if (mat[i][k] == 1)
                    {
                        mat[i][k] = -1;
                    }
                }
                for (int k = 0; k < n; k++)
                {
                    if (mat[k][j] == 1)
                    {
                        mat[k][j] = -1;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (mat[i][j] == -1)
            {
                mat[i][j] = 0;
            }
        }
    }
}

void setMatrixZeros_better(vector<vector<int>> &mat, int n)
{

    vector<bool> col(n, false);
    vector<bool> row(n, false);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!mat[i][j])
            {
                col[j] = true;
                row[i] = true;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (col[j] || row[i])
            {
                mat[i][j] = 0;
            }
        }
    }
}

void setMatrixZeros_optimal(vector<vector<int>> &mat, int n)
{
    bool firstRowZero = false, firstColZero = false;

    // Step 1: Determine if the first row or column needs to be set to zero
    for (int i = 0; i < n; i++)
    {
        if (mat[i][0] == 0)
        {
            firstColZero = true;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (mat[0][j] == 0)
        {
            firstRowZero = true;
        }
    }

    // Step 2: Use first row and column to mark rows and columns to be zeroed
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (mat[i][j] == 0)
            {
                mat[i][0] = 0;
                mat[0][j] = 0;
            }
        }
    }

    // Step 3: Set corresponding rows and columns to zero
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (mat[i][0] == 0 || mat[0][j] == 0)
            {
                mat[i][j] = 0;
            }
        }
    }

    // Step 4: Handle the first row and column separately
    if (firstColZero)
    {
        for (int i = 0; i < n; i++)
        {
            mat[i][0] = 0;
        }
    }
    if (firstRowZero)
    {
        for (int j = 0; j < n; j++)
        {
            mat[0][j] = 0;
        }
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

        setMatrixZeros_optimal(mat, n);

        for (auto row : mat)
        {
            for (auto it : row)
            {
                cout << it << " ";
            }
            cout << "\n";
        }

        cout << "\n";
    }
}

/*
2
4
1 1 1 1
1 0 0 1
1 1 0 1
1 1 1 1

5
1 1 1 1 1
1 0 1 1 1
0 1 1 1 0
0 1 1 1 1
1 1 1 1 0
*/