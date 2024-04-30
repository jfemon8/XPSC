#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k;
vector<int> a;

int dis(int val)
{
    int cnt = 1, distance = 0;
    for (int i = 1; i < n; i++)
    {
        distance += a[i] - a[i - 1];
        if (distance >= val)
        {
            cnt++;
            distance = 0;
        }
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = INT_MAX;
    while (r > l + 1)
    {
        int m = (l + r) / 2;
        if (dis(m) < k)
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    cout << l << '\n';

    return 0;
}
