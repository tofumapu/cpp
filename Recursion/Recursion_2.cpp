#include <iostream>
using namespace std;
// 2. Đệ quy nhị phân
        //VD1 * Dãy Fibonacci
    // F(n) = 1; (khi n = 1, n = 2)
    //         F(n - 1) + F(n - 2)
    // int Fibo(int n)
    // {
    //     if (n == 1 || n == 2) return 1;
    //     return Fibo(n - 1) + Fibo(n - 2);
    // }
        //VD2 *Tổ hợp chập k của n
    int tohop(int n, int k)
    {
        if(k == 0 || k == n)
        {
            return 1;
        }
        else return tohop(n - 1, k) + tohop(n - 1, k - 1);
    }
int main() {
    int n = 5; int k = 3;
    int kq = tohop(27,15);
    cout << "ket qua la: " << kq << endl;
}