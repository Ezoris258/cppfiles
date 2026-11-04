#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 5e6 + 5;
ll n, p, diff[MAXN], l, r, z, sum, a[MAXN], ans = LLONG_MAX;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> p;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        diff[i] = a[i] - a[i - 1];
    }

    while (p--)
    {
        cin >> l >> r >> z;
        diff[l] += z;
        diff[r + 1] -= z;
    }

    for (int i = 1; i <= n; i++)
    {
        a[i] = a[i - 1] + diff[i];
        ans = min(ans, a[i]);
    }

    cout << ans;

    return 0;
}