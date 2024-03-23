// Heap Memory
#include <iostream>
using namespace std;

struct Person
{
    std::string ho_ten;
    int tuoi;
};
int main()
{
    int x = 11;
    int y = 20;

    Person *vu = new Person();
    vu->ho_ten = "Vu";
    vu->tuoi = 30;
    cout << vu->ho_ten << " nam nay " << vu->tuoi << " tuoi\n";
    //Note: Heap Memory khong bi thu hoi khi thoat ra khoi {}
    delete vu;
}