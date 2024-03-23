// #include <bits/stdc++.h>
// using namespace std;

// double heron(int a, int b, int c)
// {
//     double p = 0.5 * (a + b + c);
//     double s = sqrt(p * (p - a) * (p - b) * (p - c));
//     return s;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int a, b, c;
//     cin >> a >> b >> c;
//     cout << fixed << setprecision(2) << heron(a, b, c);
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    cout << n << " ";
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            cout << n << " ";
        }
        else 
        {
            n = 3 * n + 1;
            cout << n << " ";
        }
    }
    return 0;
}