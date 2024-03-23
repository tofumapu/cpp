
#include <bits/stdc++.h>
using namespace std;

long double v(int h, int r)
{
    return static_cast<long double>(h) * r * r * 1/3 * M_PI;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int h, r;
    cin >> h >> r;
    cout << fixed << setprecision(8) << v(h, r);
}