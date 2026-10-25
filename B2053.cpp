#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, ans1, ans2;
    cin >> a >> b >> c;
    if (b * b - 4 * a * c < 0)
    {
        cout << "No answer!";
        return 0;
    }

    ans1 = (0 - b + sqrt(b * b - 4 * a * c)) / (2 * a);
    ans2 = (0 - b - sqrt(b * b - 4 * a * c)) / (2 * a);

    if (!(ans1 - ans2))
    {
        cout << "x1=x2=";
        printf("%.5lf", ans1);
    }
    else
        printf("x1=%.5lf;x2=%.5lf", min(ans1, ans2), max(ans1, ans2));

    return 0;
}