#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define linebreak cout << '\n'
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
        sort(a.rbegin(), a.rend());
        for (int val : a)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
