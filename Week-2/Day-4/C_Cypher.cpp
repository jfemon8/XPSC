#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            for (int j = 0; j < a; j++)
            {
                char x;
                cin >> x;
                if (x == 'D' && v[i] == 9)
                {
                    v[i] = 0;
                }
                else if (x == 'D')
                {
                    v[i]++;
                }
                else if (x == 'U' && v[i] == 0)
                {
                    v[i] = 9;
                }
                else if (x == 'U')
                {
                    v[i]--;
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
