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
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        int i;
        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == '0' && one > 0)
            {
                one--;
            }
            else if (s[i] == '1' and zero > 0)
            {
                zero--;
            }
            else
            {
                break;
            }
        }
        cout << s.size() - i << '\n';
    }

    return 0;
}