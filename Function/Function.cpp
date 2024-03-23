#include <bits/stdc++.h>
using namespace std;

    //1. Tham chieu & tham tri
int gapdoi(int a)
{
    a = 2 * a;
    return a;
}

float nghichdao(float &a)
{
    a = 1.0 / a;
    return a;
}
    //2. Goi ham trong ham
    //VD: ham tim so nho nhat trong 3 so
int findmin(int a, int b, int c)
{
    int t = a;
    if (b <= t)
        t = b;
    if (c <= t)
        t = c;
    return t;
}
    //VD: tinh 1*2 + 2*3 + ... + n*(n+1)
int sum(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i * (i + 1);
    }
    return s;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << sum(findmin(a,b,c));
}