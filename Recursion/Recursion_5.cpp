#include <iostream>
using namespace std;
    // 5.Đệ quy đuôi
    // UCLN(a, b) = UCLN(b, a&b)
    // int UCLN(int a, int b)
    // {
    //     if (b == 0) return a;
    //     return UCLN(b, a % b);
    // }
    // UCLN (20, 12) -> UCLN (12, 8) -> UCLN (8, 4) -> UCLN (4, 0) -> 4

    // Hàm số mũ
    int pow(int x, int n)
    {
        if (n == 0) return 1;
        else return x * pow(x, n - 1);
    }
    // Explain: pow(5,3) -> 5 * pow(5,2) -> 25 * pow(5,1) -> 125 * pow(5,0) -> 125 (n == 0)
    // Explain: pow(3,4) -> 3 * pow(3,3) -> 9 * pow(3,2) -> 27 * pow(3,1) * 81 * pow(3,0) -> 81 (n == 0)
    int pow1(int x, int n)
    {
        if (n == 0) 
            return 1;
        else if (n % 2 == 0)
            return pow(x, n / 2) * pow(x, n / 2);
        else return x * pow(x, n - 1);
    }
    // Explain: Hàm số mũ cũng có thể được viết theo cách sau tuỳ vào số mũ chẵn hay lẻ
    // Note: Độ phức tạp của 2 hàm trên đều là O(log n).
int main(){
    cout << pow(5,3); cout << endl;
    cout << pow1(5,3);
}
