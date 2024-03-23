#include <iostream>
using namespace std;

// 3. Đệ quy hỗ tương:
// Đệ quy tương hỗ là loại đệ quy không gọi đệ quy trực tiếp chính nó, mà gọi một hàm khác. Trong hàm khác lại gọi lại nó.
    //VD
    // void xuat1(int n);
    // void xuat2(int n);

    // void xuat1(int n)
    // {
    //     if (n > 0)
    //     {
    //         cout << n << " ";
    //         xuat2(n - 1);
    //     }
    // }

    // void xuat2(int n)
    // {
    //     if (n > 0)
    //     {
    //         cout << n << " ";
    //         xuat1(n - 2);
    //     }
    // }

    //VD1
    // X(0) = 1;, Y(0) = 1;
    // X(n) = X(n - 1) + Y(n - 1)
    // Y(n) = X(n - 1) * Y(n - 1)
    // X(3) = ? ; Y(3) = ?
    int X(int n);
    int Y(int n);
    int X(int n)
    {
        if (n == 0) 
            return 1;
        else return X(n - 1) + Y(n - 1);
    }
    int Y(int n)
    {
        if (n == 0)
            return 1;
        else
            return X(n - 1) * Y(n - 1);
    }
int main(){
    cout << "X(3) va Y(3) la: " << X(3) << " " << Y(3);
}
