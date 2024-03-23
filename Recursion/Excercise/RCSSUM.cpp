// https://vinhdinhcoder.net/Problem/Details/4932
#include <iostream>
using namespace std;
int tcs(long long n)
{
    if (n == 0) return 0;
    else return tcs(n / 10) + (n % 10);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long n;
    cin >> n;
    cout << tcs(n);
}