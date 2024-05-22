#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll countDivisibleSubarrays(ll n, const vector<ll> &array)
{
    unordered_map<ll, ll> modCount;
    modCount[0] = 1;
    ll prefixSum = 0;
    ll count = 0;

    for (ll num : array)
    {
        prefixSum += num;
        ll mod = prefixSum % n;

        if (mod < 0)
        {
            mod += n;
        }

        if (modCount.find(mod) != modCount.end())
        {
            count += modCount[mod];
            modCount[mod]++;
        }
        else
        {
            modCount[mod] = 1;
        }
    }

    return count;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> array(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
    }

    cout << countDivisibleSubarrays(n, array) << endl;

    return 0;
}
