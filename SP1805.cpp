#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 1000005;
ll a[MAXN], st_l[MAXN], st_r[MAXN], l[MAXN], r[MAXN], n, top;
ll ans;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (cin >> n && n != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int top = 0;
        ll ans = 0;

        for (int i = 1; i <= n; i++)
        {
            while (top > 0 && a[st_l[top]] >= a[i])
            {
                top--;
            }
            if (top > 0)
            {
                l[i] = st_l[top];
            }
            else
                l[i] = 0;
            st_l[++top] = i;
        }
        top = 0;
        for (int i = n; i >= 1; i--)
        {
            while (top > 0 && a[st_r[top]] >= a[i])
            {
                top--;
            }
            if (top > 0)
            {
                r[i] = st_r[top];
            }
            else
                r[i] = n + 1;
            st_r[++top] = i;
        }

        for (int i = 1; i <= n; i++)
        {
            ans = max(ans, ll(r[i] - l[i] - 1) * a[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}