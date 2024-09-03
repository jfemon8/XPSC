#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k = 0;
        int mn = 0;
        int mx = INT_MAX;
        vector<int> v;
        cin >> n;
        while (n--)
        {
            int a, x;
            cin >> a >> x;
            if (a == 1)
            {
                mn = max(mn, x);
            }
            else if (a == 2)
            {
                mx = min(mx, x);
            }
            else if (a == 3)
            {
                v.push_back(x);
            }
        }
        if (mn > mx)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] < mn || v[i] > mx)
                {
                    v.erase(v.begin() + i);
                    i--;
                }
            }
            cout << (mx - mn - v.size()) + 1 << endl;
        }
    }

    return 0;
}