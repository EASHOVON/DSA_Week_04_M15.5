#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* int n = 3;
    int A[n][n];
    int B[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> B[i][j];
        }
    }

    int C[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                C[i][j] = A[i][j] * B[j][j] + A[i][j + 1] * B[j + 1][j] + A[i][j + 2] * B[j + 2][j];
            }
            else if (j == 1)
            {
                C[i][j] = A[i][j - 1] * B[j - 1][j] + A[i][j] * B[j][j] + A[i][j + 1] * B[j + 1][j];
            }
            else
            {
                C[i][j] = A[i][j - 2] * B[j - 2][j] + A[i][j - 1] * B[j - 1][j] + A[i][j] * B[j][j];
            }
        }
    } */

    int n = 3;
    int A[n][n], B[n][n], C[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int mul = 0;
            for (int k = 0; k < n; k++)
            {
                mul += A[i][k] * B[k][j];
            }
            C[i][j] = mul;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
