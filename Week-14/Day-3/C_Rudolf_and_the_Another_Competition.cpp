#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;
        vector<pair<ll, ll>> arr(n);
        for (int i = 0; i < n; i++)
        {
            vector<ll> time(m);
            for (int j = 0; j < m; j++)
            {
                cin >> time[j];
            }
            sort(time.begin(), time.end());
            ll points = 0, penalty = 0, rem = h, curr = 0;
            for (int j = 0; j < m; j++)
            {
                if (time[j] <= rem)
                {
                    points++;
                    penalty += curr + time[j];
                    curr += time[j];
                    rem -= time[j];
                }
                else
                {
                    break;
                }
            }
            arr[i] = {points, penalty};
        }
        ll p = arr[0].first;
        ll pp = arr[0].second;
        ll pos = 1;

        for (int i = 1; i < n; i++)
        {
            if (arr[i].first > p)
            {
                pos++;
            }
            else if (arr[i].first == p && arr[i].second < pp)
            {
                pos++;
            }
        }
        cout << pos << '\n';
    }

    return 0;
}
