// https://vinhdinhcoder.net/Problem/Details/4930
#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n == 0) return 0;
    else if (n == 1 || n == 2) return 1;
    else return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    cout << fibo(n);
}