#include <bits/stdc++.h>
using namespace std;
vector<int> a;
void qs(int l, int r)
{
    if (l >= r)
        return;
    int i = l, j = r, mid = a[(l + r) >> 1];
    while (i <= j)
    {
        while (a[i] < mid)
        {
            i++;
        }
        while (a[j] > mid)
        {
            j--;
        }
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    qs(l, j);
    qs(i, r);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    qs(0, n - 1);

    for (auto i : a)
    {
        cout << i << ' ';
    }
}