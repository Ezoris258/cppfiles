#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<unordered_map<int, int>> a(n + 1);

    while (q--)
    {
        int op, i, j, k;
        cin >> op;
        if (op == 1)
        {
            cin >> i >> j >> k;
            a[i][j] = k;
        }
        else
        {
            cin >> i >> j;
            cout << a[i][j] << '\n';
        }
    }
    return 0;
}
