#include <bits/stdc++.h>
using namespace std;

double sumsqrt(int n)
{
    if (n == 0) return 0;
    else return sqrt(n + sumsqrt(n - 1));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    double x = sumsqrt(n);
    cout << setprecision(3) << fixed << x;
}