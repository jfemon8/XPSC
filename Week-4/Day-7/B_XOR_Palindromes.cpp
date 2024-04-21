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
        int n, cnt = 0, count = 0, flag = 0;
        string s;
        cin >> n >> s;
        vector<int> a(n + 1, 0);
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == s[n - i - 1])
            {
                cnt++;
            }
            else
            {
                count++;
            }
        }
        if (n % 2 == 1)
        {
            flag = 1;
        }
        for (int i = 0; i <= cnt; i++)
        {
            a[count + 2 * i] = 1;
            if (flag)
            {
                a[count + 2 * i + 1] = 1;
            }
        }
        for (int val : a)
        {
            cout << val;
        }
        cout << '\n';
    }

    return 0;
}
