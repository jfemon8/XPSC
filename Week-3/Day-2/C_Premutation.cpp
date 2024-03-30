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
        int n;
        cin >> n;
        int mat[n][n - 1];
        map<int, int> mp;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> mat[i][j];
                if (j == 0)
                {
                    mp[mat[i][j]]++;
                }
            }
        }
        int x, fs = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second > fs)
            {
                x = it->first;
                fs = it->second;
            }
        }
        v.push_back(x);

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (find(v.begin(), v.end(), mat[j][i]) == v.end())
                {
                    v.push_back(mat[j][i]);
                    break;
                }
            }
        }
        for (int val : v)
        {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}
