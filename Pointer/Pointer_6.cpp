#include <bits/stdc++.h>
using namespace std;

void nhapmang(int *&a, int &n)
{
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i]; 
    }
}
void xuatmang(int *a, int n)
{
    cout << "Mang mot chieu dong vua nhap la: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}

void nhapmang2(int *&a, int &n)
{
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> *(a + i);
        // cin >> (*a++);
    }
}

void nhapmang2chieu(int **&a, int &m, int &n)
{
    cout << "Nhap so hang: " << endl;
    cin >> m;
    cout << "Nhap so cot: " << endl;
    cin >> n;
    a = new int*[m];
    for (int i = 0; i < m; i++)
    {
        a[i] = new int[n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
    }
}
void xuatmang2chieu(int **&a, int &m, int &n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
// 1 2 3 4 5
// 2 3 4 5 6
// 3 4 5 6 7
// 4 5 6 7 8
// 5 6 7 8 9
int main(){
    // int n = 5;
    // int *a;
    // nhapmang(a, n);
    // xuatmang(a, n);
    int **b;
    int m,n;
    nhapmang2chieu(b, m, n);
    xuatmang2chieu(b, m, n);
    return 0;
}