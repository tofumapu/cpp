//https://vinhdinhcoder.net/Problem/Details/4940
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool hacker(ll n)
{
    if (n == 1) return true;
    if (n % 10 == 0 || n % 20 == 0)
        return hacker(n / 10) || hacker(n / 20);
    else return false;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ll n;
        cin >> n;
        if (hacker(n)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}