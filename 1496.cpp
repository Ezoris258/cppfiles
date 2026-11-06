#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<pair<ll, ll>> a;
vector<ll> rk;
ll n, ans, sum, m, cover;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    a.reserve(2 * n);
    rk.reserve(n);

    for (ll i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        a.push_back({l, r});
        rk.push_back(l);
        rk.push_back(r);
    }

    sort(rk.begin(), rk.end());
    rk.erase(unique(rk.begin(), rk.end()), rk.end());

    m = (ll)rk.size();

    vector<ll> d(m + 1);

    for (auto [l, r] : a)
    {
        ll L, R;
        L = lower_bound(rk.begin(), rk.end(), l) - rk.begin();
        R = lower_bound(rk.begin(), rk.end(), r) - rk.begin();
        d[L]++;
        d[R]--;
    }

    for (int i = 0; i + 1 < m; i++)
    {
        cover += d[i];
        if (cover > 0)
        {
            ans += rk[i + 1] - rk[i];
        }
    }

    cout << ans << '\n';

    return 0;
}