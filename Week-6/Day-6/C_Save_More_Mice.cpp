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
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int cnt = 0, mice = 0;
        for (int i = k - 1; i >= 0; i--)
        {
            if (a[i] > cnt)
            {
                cnt += n - a[i];
                mice++;
            }
            else
            {
                break;
            }
        }
        cout << mice << '\n';
    }

    return 0;
}
