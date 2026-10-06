#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> dir(n);
    vector<string> name(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> dir[i] >> name[i];
    }

    int pos = 0;
    while (m--)
    {
        int d, x;
        cin >> d >> x;

        if (dir[pos] == 0)
        {
            if (d == 0) pos = (pos + x) % n;      // face inside, left = clockwise
            else pos = (pos - x + n) % n;         // face inside, right = counterclockwise
        }
        else
        {
            if (d == 0) pos = (pos - x + n) % n;  // face outside, left = counterclockwise
            else pos = (pos + x) % n;             // face outside, right = clockwise
        }
    }

    cout << name[pos] << '\n';
    return 0;
}

