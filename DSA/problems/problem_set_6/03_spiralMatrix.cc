#include <bits/stdc++.h>
using namespace std;

void spiralMatrix(vector<vector<int>> mat, int n, int m)
{
    int top = 0, left = 0, bottom = n - 1, right = m - 1;

    while (top <= bottom && left <= right)
    {
        // Traverse from left to right along the top row
        for (int i = left; i <= right; i++)
        {
            cout << mat[top][i] << " ";
        }
        top++; // Move the top boundary down

        // Traverse from top to bottom along the right column
        for (int i = top; i <= bottom; i++)
        {
            cout << mat[i][right] << " ";
        }
        right--; // Move the right boundary left

        // Traverse from right to left along the bottom row (if applicable)
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << mat[bottom][i] << " ";
            }
            bottom--; // Move the bottom boundary up
        }

        // Traverse from bottom to top along the left column (if applicable)
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << mat[i][left] << " ";
            }
            left++; // Move the left boundary right
        }
    }

    cout << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }

        spiralMatrix(mat, n, m);

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