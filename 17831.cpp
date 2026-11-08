#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, m, ans, l = 1, r = 1;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    vector<ll> a(n + 1), sum(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin() + 1, a.end());

    for (ll i = 1; i <= n; i++)
    {
        sum[i] = sum[i - 1] + a[i];
    }

    for (; r <= n; r++)
    {
        while (l <= r &&
               ((r - l + 1) * a[r] - (sum[r] - sum[l - 1])) > m)
        {
            l++;
        }
        ans = max(ans, r - l + 1);
    }

    cout << ans;

    return 0;
}