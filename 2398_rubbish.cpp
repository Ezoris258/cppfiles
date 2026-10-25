#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, ans = 0;
    cin >> n;
    for (ll i = n; i >= 1; i--)
    {
        for (ll j = 1; j < i; j++)
        {
            ans += __gcd(i, j);
        }
    }
    ans *= 2;
    for (ll i = 1; i <= n; i++)
    {
        ans += __gcd(i, i);
    }

    cout << ans;

    return 0;
}