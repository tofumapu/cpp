#include <iostream>
using namespace std;
    // Đệ quy phi tuyến tính
    //     Là hàm đệ quy có lời gọi hàm chính nó được đặt trong 1 vòng lặp
    // VD  S(1) = 1;
    //     S(n) = S(1) + S(2) + .. + S(n - 1)

    // int s(int n)
    // {
    //     if (n == 1) return 1;
    //     int temp = 0;
    //     for (int i = 1;i < n; i++)
    //     {
    //         temp += s(i);
    //     }
    //     return temp;
    // }
    // VD2: X(n) = n * n * X(0) + .. + 1*1*X(n - 1), X(0) = 1;
    int X (int n) {
        if (n == 0) return 1;
        long long s = 0;
        for (int i = 1; i <= n; i++) {
            s += i * i * X(n - i);
        }
        return s;
    }
int main()
{
    cout << X(5);
}