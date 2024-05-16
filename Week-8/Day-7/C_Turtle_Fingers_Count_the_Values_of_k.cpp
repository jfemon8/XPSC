#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, l;
        vector<int> v;
        cin >> a >> b >> l;
        for (int i = 0; i <= 20; i++)
        {
            for (int j = 0; j <= 20; j++)
            {
                float k = (l * 1.0) / (pow(a, i) * pow(b, j)) * 1.0;
                if (k - int(k) == 0)
                {
                    if (k != 0 && find(v.begin(), v.end(), k) == v.end())
                    {
                        v.push_back(k);
                    }
                }
            }
        }
        cout << v.size() << endl;
    }

    return 0;
}
