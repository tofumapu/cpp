#include <bits/stdc++.h>
using namespace std;

// Truyen tham tri hoan doi gia tri cua hai con tro
    // => Khong hoan vi
void hoanvi(int p1, int p2)
{
    int temp = p1; 
    p1 = p2;
    p2 = temp;
}

// Truyen tham chieu hoan doi gia tri cua hai con tro
    // => Co hoan vi
void hoanvi2(int &p1, int &p2)
{
    int temp = p1; 
    p1 = p2;
    p2 = temp;
}

// Truyen 2 con tro 
    // => Khong hoan vi
void hoanvi3(int *p1, int *p2)
{
    int *temp = p1; 
    p1 = p2;
    p2 = temp;
}
// Truyen 2 con tro co tham chieu
    // =>Co hoan vi
void hoanvi4(int *&p1, int *&p2)
{
    int *temp = p1; 
    p1 = p2;
    p2 = temp;
}
// => Muốn hoán vị phải dùng tham chiếu
// 2 . Khởi tạo
    // => success
// int* KhoiTao(int value)
// {
//     int *temp = new int;
//     *temp = value;
//     return temp;
// }
// // Khởi tạo
// // => success
int* KhoiTao2(int value)
{
   int temp = value;
   return &temp;
}
int main()
{
    int a = 5; 
    int *p1 = &a;
    int b = 7;
    int *p2 = &b;
    // hoanvi1(*p1, *p2);
    // hoanvi2(*p1, *p2);
    // hoanvi3(p1, p2);
    // hoanvi4(p1, p2);
    // cout << "p1: " << *p1 << endl;
    // cout << "p2: " << *p2 << endl;
    
    int *p = NULL;
    p = KhoiTao2(12);
    cout << p << " " << *p << endl;
    return 0;

}