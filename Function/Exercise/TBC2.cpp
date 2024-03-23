#include <bits/stdc++.h>
using namespace std;
int sum4, average;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for (int i = 1; i <= 4; i++)
    {
        cin >> sum4;
        average += sum4;
    }
    cout << fixed << setprecision(2) << static_cast<double>(average) * 0.25;
}