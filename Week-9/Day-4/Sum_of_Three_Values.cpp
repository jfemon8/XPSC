#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> a;
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        a.push_back({val, i + 1});
    }
    sort(a.begin(), a.end());
    bool ans = false;
    int idx1, idx2, idx3;
    for (int i = 0; i < n; i++)
    {
        ll target = x - a[i].first;
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            ll sum = a[l].first + a[r].first;
            if (sum == target)
            {
                idx1 = a[i].second;
                idx2 = a[l].second;
                idx3 = a[r].second;
                ans = true;
                break;
            }
            else if (sum < target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        if (ans)
        {
            break;
        }
    }
    if (ans)
    {
        cout << idx1 << " " << idx2 << " " << idx3;
    }
    else
    {
        cout << "IMPOSSIBLE";
    }

    return 0;
}
