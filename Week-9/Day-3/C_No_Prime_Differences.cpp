#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        int num = 1;
        vector<int> last;
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < m; j++)
            {
                arr[i + (n / 2)][j] = num++;
            }
            for (int j = 0; j < m; j++)
            {
                arr[i][j] = num++;
            }
        }
        if (n % 2)
        {
            for (int i = 0; i < m; i++)
            {
                arr[n - 1][i] = num++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}
