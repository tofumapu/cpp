// #include <bits/stdc++.h>
// using namespace std;

//     // 6. Đệ quy lồng nhau
//     // VD: fun(n)
//     //     {
//     //         fun(fun(n+1));
//     //     }

//     // int fun(int n)
//     // {
//     //     if (n > 100)
//     //         return n - 10;
//     //     return fun(fun(n + 11));
//     // }
//     // VD: n = 98
//     // fun(fun(109)) -> fun(99) -> fun(fun(110)) -> fun(100) -> fun(fun(111)) -> fun(101) -> 101 - 10 = 91;
    

//     int ackerman(int m, int n) {
//         if (m == 0)
//             return n + 1;
//         else if (m > 0 && n == 0)
//             return ackerman(m - 1, 1);
//         else if (m > 0 && n > 0)
//             return ackerman(m - 1, ackerman(m, n - 1));
// }
//     // a(2,1) -> a(1,a(2,0)) -> a(1,a(1,1)) -> a(1,a(0,a(1,0))) -> a(1,a(0),a(0,1)) -> a(1,a(0),2) -> a(1,3) -> a(0,a(1,2)) -> a(0,(a(0),a(1,1))) -> a(0,4) -> 5
// int main()
// {
//     cout << ackerman(3,3);
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int ackerman(int m, int n) {
  if (m == 0)
    return n + 1;
  else if (m > 0 && n == 0)
    return ackerman(m - 1, 1);
  else if (m > 0 && n > 0)
    return ackerman(m - 1, ackerman(m, n - 1));
}

int main() {
  cout << ackerman(3, 3);
  return 0;
}
