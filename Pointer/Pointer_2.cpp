#include <bits/stdc++.h>
using namespace std;

void printPtr(double *ptr)
{
    cout << ptr << ": ";
    cout << *ptr << endl;
}
int main()
{
    double value = 5;
    double *ptr = &value;
    for (size_t i = 0; i <= 100; i++){
        printPtr(ptr + i);
    }
    printPtr(ptr);
    printPtr(ptr + 1);
    printPtr(ptr + 2);
    
    int array[] = {5, 8, 2, 7};
    cout << "Element 0 is at address: " << &array[0] << '\n';
	cout << "Element 1 is at address: " << &array[1] << '\n';
	cout << "Element 2 is at address: " << &array[2] << '\n';
	cout << "Element 3 is at address: " << &array[3] << '\n';

    // cout << &array[1] << '\n'; // địa chỉ vùng nhớ phần tử 1
	// cout << array + 1 << '\n'; // địa chỉ vùng nhớ phần tử 1 

	// cout << array[1] << '\n'; // 8
	// cout << *(array + 1) << '\n'; // 8
    

}