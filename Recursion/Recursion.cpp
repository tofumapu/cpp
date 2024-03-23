#include <iostream>
using namespace std;

// 0. Hieu co ban ve de quy
// Co 2 kieu de quy

// void tenHam(int n)
// {
//     tenHam(n-1);
// }

// int tenHam(int n)
// {
//     return tenHam(n+1);

//  1. Đệ quy tuyến tính
//  -> là loại đệ quy chỉ có 1 lời mời gọi hàm
    // VD1
    // int giaithua(int n)
    // {
    //     if (n == 0)
    //     {
    //         return 1;
    //     }
    //     return n * giaithua(n - 1);
    // }
    // -> giaithua(5) = 5 * giaithua(4)
    // -> giaithua(4) = 4 * giaithua(3)
    // -> giaithua(3) = 3 * giaithua(2)
    // -> giaithua(2) = 2 * giaithua(1)
    // -> giaithua(1) = 1 * giaithua(0)
    // -> giaithua(0) = 1;

    // VD2
    int Tong(int n)
    {
        if (n == 0) return 0;
        return Tong(n - 1) + n;

    }
    -> Tong(5) = 5 + Tong(4)
    -> Tong(4) = 4 + Tong(3)
    -> Tong(3) = 3 + Tong(2)
    -> Tong(2) = 2 + Tong(1)
    -> Tong(1) = 1 + Tong(0)
    -> Tong(0) = 1
int main() {
    int n = 5;
    int kq1 = Tong(n);
    cout << "Ket qua la: " << kq1 << endl;
}