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
        string s;
        cin >> n >> s;
        bool ans = true;
        if (n < 4 || (s[0] != 'm' && s[0] != 'M') || (s[n - 1] != 'w' && s[n - 1] != 'W'))
        {
            ans = false;
        }
        if (ans)
        {
            for (int i = 1; i < n; i++)
            {
                if (s[i] == 'm' || s[i] == 'M')
                {
                    if (s[i - 1] != 'm' && s[i - 1] != 'M')
                    {
                        ans = false;
                        break;
                    }
                }
                else if (s[i] == 'e' || s[i] == 'E')
                {
                    if (s[i - 1] != 'm' && s[i - 1] != 'M' && s[i - 1] != 'e' && s[i - 1] != 'E')
                    {
                        ans = false;
                        break;
                    }
                }
                else if (s[i] == 'o' || s[i] == 'O')
                {
                    if (s[i - 1] != 'o' && s[i - 1] != 'O' && s[i - 1] != 'e' && s[i - 1] != 'E')
                    {
                        ans = false;
                        break;
                    }
                }
                else if (s[i] == 'w' || s[i] == 'W')
                {
                    if (s[i - 1] != 'w' && s[i - 1] != 'W' && s[i - 1] != 'o' && s[i - 1] != 'O')
                    {
                        ans = false;
                        break;
                    }
                }
                else
                {
                    ans = false;
                    break;
                }
            }
        }
        if (ans)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
