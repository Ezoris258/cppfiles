#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 5e5 + 5;
int a[MAXN], t[MAXN];

ll qs(int l, int r)
{
    if (l >= r)
        return 0;
    int i = l, mid = (l + r) >> 1, j = mid + 1, k = l;
    ll res = qs(l, mid) + qs(mid + 1, r);
    while (i <= mid && j <= r)
    {
        if (a[i] <= a[j])
        {
            t[k++] = a[i++];
        }
        else
        {
            res += (mid - i + 1);
            t[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        t[k++] = a[i++];
    }
    while (j <= r)
    {
        t[k++] = a[j++];
    }
    for (int q = l; q <= r; q++)
    {
        a[q] = t[q];
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << qs(0, n - 1);
}