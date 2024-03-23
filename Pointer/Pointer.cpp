
#include <bits/stdc++.h>
using namespace std;

    // I. Con trỏ cơ bản trong c++
        // int main()
        // {
        //     int x = 10;
        //     cout << x << endl; // print the value of variable x
        //     cout << &x << endl; // print the memory address of variable x
        //     cout << *&x << endl; // print the value at the memory address of variable x
        //     *&x = 20;
        //     cout << x << endl // print the value of variable x
        //     system("pause");
        //     return 0;
        // }

        // int main() {
        //     int x = 10
        //     int *iPtr = &x; // con trỏ đến 1 địa chỉ chứa giá trị số nguyên
        //     double *dPtr // con trỏ đến 1 địa chỉ chứa giá trị số thực

        //     int* iPtr2; // đúng cú pháp (nhưng không nên sử dụng)
        //     int * iPtr3 // đúng cú pháp (nhưng không nên sử dụng)
            
        //     int *iPtr4, *iPtr5; // khai báo 2 con trỏ đến các biến số nguyên

        // }

        // int main()
        // {
        //     int value = 10;
        //     int *ptr = &value; // khởi tạo con trỏ ptr là địa chỉ biến value

        //     cout << &value << endl; // in địa chỉ biến value
        //     cout << *ptr << endl; //in địa chỉ của con trỏ ptr đang giữ
        //     *ptr = 100;
        //     cout << ptr << endl;
        // }

        // int main()
        // {
        //     int iValue = 5;
        //     double dValue = 7.0;

        //     auto *iPtr = &iValue; // ok
        //     auto *dPtr = &dValue; // ok

        //     iPtr = &iValue; // sai - con trỏ int không thể trỏ đến địa chỉ double
        //     dPtr = &dValue; // sai - con trỏ double không thể trỏ đến địa chỉ biến int
        //     cout << &iPtr << endl;
        //     cout << &dPtr << endl;
        //     //int *ptr = 5; sai - con trỏ chỉ có thể giữ 1 địa chỉ
        //     //double *dPtr = 0x0012FF7C; // sai
        // } 

        // int main()
        // {
        //     int value1 = 5;
        //     int value2 = 7;

        //     int *ptr;

        //     ptr = &value1; // ptr points to value 1
        //     cout << *ptr << "\n";

        //     ptr = &value2; // ptr now points to value 2
        //     cout << *ptr << "\n";
        // }

// II. Con trỏ NULL trong C++ (NULL pointers)

    // void doSomething(double *ptr)
    // {
    //     // ptr sẽ chuyển thành true nếu no null, và false nếu nó không null
    //     if (ptr)
    //     {
    //         cout << "You passed in " << *ptr << "\n";
    //     }
    //     else cout << "You passed in a null pointer\n";
    // }

    // int main()
    // {
    //     float a = 10;
    //     float *ptr = &a;
    //     // float *ptr{ 0 }; // ptr là 1 con trỏ null
        
    //     float *ptr2; // ptr2 là con trỏ rác
    //     ptr2 = 0; // ptr2 là 1 con trỏ null

    //     // Ta có thể sử dụng một điều kiện để kiểm tra xem con trỏ có null hay không:
    //     //double *ptr{ 0 };
        
    //     // con trỏ sẽ chuyển thành true nếu nó null, và false nếu nó không null
    //     // if (ptr)
    //     // {
    //     //     cout << "con trỏ đến địa chỉ.";
    //     // }
    //     // else 
    //     //     cout << "con trỏ null.";
    //     // Truy cập vào con trỏ null
    //     double *ptr3 = NULL; // ptr là 1 con trỏ null;
    //     doSomething(nullptr);
    // }

// III. Con trỏ mảng trong C++.


        // int main()
        // {
        //     int array[4] = { 5, 8, 2, 7 };

        //     // toán tử trỏ (*) trả về giá trị phần tử đầu tiên: array[0]
        //     cout << *array << '\n'; // 5

        //     // khai báo con trỏ ptr trỏ vào mảng array
        //     int *ptr = array;
        //     cout << *(ptr) << '\n'; // 5

        //     char name[] = "Kteam"; // C-style string (mảng char)
        //     cout << *name << '\n'; // K

        //     system("pause");
        //     return 0;
        // }

    // void printSize(int *array)
    //     {
    //         // tham số array là con trỏ int*
    //         cout << sizeof(array) << '\n'; // kích thước con trỏ int*, không phải kích thước mảng
    //     }
    // int main()
    // {
    //         int array[] = { 5, 8, 2, 7 };
    //         cout << sizeof(array) << '\n'; // kích thước mảng: sizeof(int) * array length

    //         printSize(array); // đối số array được chuyển thành con trỏ int* tại đây

    //         system("pause");
    //         return 0;
    // }






    
