#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 1E5 + 5;
ll sum[MAXN], m, n, a[MAXN], l, r;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = a[i] + sum[i - 1];
    }

    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> l >> r;
        cout << sum[r] - sum[l - 1] << '\n';
    }

    return 0;
}