#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, m;
vector<int> t, z, y, ans;

bool good(int time)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int b = time / (t[i] * z[i] + y[i]);
        int rem = time % (t[i] * z[i] + y[i]);
        b *= z[i];
        if (rem >= t[i])
        {
            if (rem / t[i] > z[i])
            {
                b += z[i];
            }
            else
            {
                b += rem / t[i];
            }
        }
        ans[i] = b;
        cnt += ans[i];
    }
    return cnt >= m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n;
    t.resize(n);
    z.resize(n);
    y.resize(n);
    ans.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> t[i] >> z[i] >> y[i];
    }

    if (m == 0)
    {
        cout << "0\n";
        for (int i = 0; i < n; i++)
        {
            cout << "0 ";
        }
    }
    else
    {
        int l = 0, r = 1e7;
        while (r > l + 1)
        {
            int mid = (l + r) / 2;
            if (good(mid))
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }
        cout << r << '\n';
        int time = r;
        for (int i = 0; i < n; i++)
        {
            int b = time / (t[i] * z[i] + y[i]);
            int rem = time % (t[i] * z[i] + y[i]);
            b *= z[i];
            if (rem >= t[i])
            {
                if (rem / t[i] > z[i])
                {
                    b += z[i];
                }
                else
                {
                    b += rem / t[i];
                }
            }
            ans[i] = b;
        }
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            if (total + ans[i] > m)
            {
                if (m > 0)
                {
                    cout << m - total << " ";
                    m = 0;
                }
                else
                {
                    cout << "0 ";
                }
            }
            else
            {
                cout << ans[i] << " ";
            }
            total += ans[i];
        }
    }

    return 0;
}
