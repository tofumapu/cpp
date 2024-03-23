#include <bits/stdc++.h>
using namespace std;

   /*Cách khai báo con trỏ
      - <kiểu dữ liệu> * <tên biến>
   Con trỏ có một số đặc tính như sau:
      - Giá trị của con trỏ là địa chỉ mà con trỏ trỏ đến
      - Địa chỉ của con trỏ là địa chỉ của chính con trỏ
      - Giá trị của biến là giá trị ở vị trí mà con trỏ đang trỏ đến
      - Địa chỉ của biến là địa chỉ của vị trí mà con trỏ đang trỏ đến giá trị của biến
   */
int main()
{
   int *p; 
   int value = 2;
   p = &value;
   cout << "Gia tri cua value la: " << value << endl;
   cout << "Dia chi cua value la: " << &value << endl;
   cout << "********************" << endl;
   cout << "Gia tri cua con tro la: " << p << endl;
   cout << "Dia chi cua con tro la: " << &p << endl;
   cout << "Gia tri cua bien ma con tro tro toi la: " << *p << endl;

   value = 7;
   cout << "Gia tri cua value la: " << value << endl;
   cout << "Gia tri cua con tro tro toi la: " << *p << endl;

   *p = 20;
   cout << "Gia tri cua value la: " << value << endl;
   cout << "Gia tri cua con tro tro toi la: " << *p << endl;
   void* a = NULL;
   cout << "Gia tri cua con tro void la: " << a << endl;

   int *t;
   t = new int;
   *t = 20;
   cout << *t << endl;
   return 0;
}