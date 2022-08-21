#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int array[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }

    int max = INT_MIN;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i][j] == max)
            {
                cout << "Max: " << max << endl;
                cout << "Location: [" << i << "][" << j << "]" << endl;
            }
        }
    }

    return 0;
}