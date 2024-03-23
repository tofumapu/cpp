#include <bits/stdc++.h>
using namespace std;

    // 7. Đệ quy trên mảng một chiều
    //VD: Tổng của mảng
int tong(int a[], int n)
{
    if (n == 1)
        return a[0];
    else return tong(a, n - 1)  + a[n - 1];
}
    //VD: tìm Max
int Max(int a[], int n)
{
    if (n == 1)
        return a[0];
    int temp = Max(a, n - 1);
    if (temp > a[n - 1])
        return temp;
    else return a[n - 1];
}
    //VD: Đếm số phần tử >= 20
int demSo(int a[], int n)
{
    if (n == 1 && a[0] >= 20)
        return 1;
    else if (n == 1 && a[0] < 20)
        return 0;
    if (a[n - 1] >= 20)
        return 1 + demSo(a, n - 1);
    return demSo(a, n - 1);
}
int main()
{
    int a[5]= {21, 17, 35, 5, 100};
    cout << tong(a, 5);
    cout << endl;
    cout << Max(a, 5);
    cout << endl << demSo(a, 5);
}