//https://vinhdinhcoder.net/Problem/Details/4940
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool convert(ll a, ll b)
{
    if (a == b) return true;
    if (b % 2 == 0 || (b - 1) % 10 == 0)
        return hacker(b / 2) || hacker((b - 1) / 10);
    else return false;
}
int main()
{
    ll a,b;
    cin >> a >> b;
    if (convert(n /))
    return 0;
}