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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] > a[i])
            {
                cnt++;
            }
        }
        if (cnt > 2)
        {
            cout << "No\n";
        }
        else
        {
            if (a[0] >= a[n - 1] || cnt == 1)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }

    return 0;
}