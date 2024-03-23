#include <bits/stdc++.h>
using namespace std;

int main(){
// Gán con trỏ
    // int* p1, * p2; 
	// p1 = new int; *p1 = 4;
	// p2 = p1;
	// cout << "p1== " << *p1 << endl;
	// cout << "p2== " << *p2 << endl;
	// cout << "*********************" << endl;
    
    // *p2 = 5;
	// cout << "p1== " << *p1 << endl;
	// cout << "p2== " << *p2 << endl;
	// cout << "*********************" << endl;

	// p1 = new int;*p1 = 10;
	// cout << "p1== " << *p1 << endl;
	// cout << "p2== " << *p2 << endl;

	// cout << "*********************" << endl;

    // *p2 = *p1;
	// cout << "p1== " << *p1 << endl;
	// cout << "p2== " << *p2 << endl;
	// cout << "*********************" << endl;
    // cout << p1 << endl;
    // cout << p2 << endl;

    // // Một số phép toán khác của con trỏ
    // int a = 5;
    // int *p = &a;
    // cout << "1. Dia chi cua p: " << &p << endl;
    // cout << "2. Gia tri cua con tro p: " << p << endl;
    // cout << "3. Gia tri cua bien con tro p tro den: " << *p << endl;
    // p++;
    // cout << "1. Dia chi cua p: " << &p << endl;
    // cout << "2. Gia tri cua con tro p: " << p << endl;
    // cout << "3. Gia tri cua bien con tro p tro den: " << *p << endl;
    // p--;
    // cout << "1. Dia chi cua p: " << &p << endl;
    // cout << "2. Gia tri cua con tro p: " << p << endl;
    // cout << "3. Gia tri cua bien con tro p tro den: " << *p << endl;
    // p = p + 2;
    // cout << "1. Dia chi cua p: " << &p << endl;
    // cout << "2. Gia tri cua con tro p: " << p << endl;
    // cout << "3. Gia tri cua bien con tro p tro den: " << *p << endl;
    // p = p - 2;
    // cout << "1. Dia chi cua p: " << &p << endl;
    // cout << "2. Gia tri cua con tro p: " << p << endl;
    // cout << "3. Gia tri cua bien con tro p tro den: " << *p << endl;

    int a = 5; 
    int *p1 = &a;
    int b = 5;
    int *p2 = &b;
    if (*p1 == *p2)
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    if (p1 >= p2)
    {
        cout << "p1 luu tru truoc p2" << endl;
    }
    else cout << "p1 luu tru sau p2" << endl;
    if (p1 == p2)
    {
        cout << "Hai con tro tro cung 1 dia chi" << endl;
    }
    else cout << "Hai con tro tro khac dia chi nhau" << endl;
}
