#include <iostream>
#include <string>
using namespace std;

struct Address
{
    string so_nha;
    string ten_quan;
};
struct person
{
    string ho_ten;
    int tuoi;
    float chieu_cao;
    int so_do[3];
    Address address;
};
int main()
{
    // person Hieu;
    // Hieu.ho_ten = "Vo Duy Hieu";
    // Hieu.tuoi = 17;
    // Hieu.chieu_cao = 1.52;
    // Hieu.so_do[0] = 60;
    // Hieu.so_do[1] = 90;
    // Hieu.so_do[2] = 60;
    // Hieu.address.so_nha = "60A";
    // Hieu.address.ten_quan = "Quan Kim Ngan";

    // person Quoc;
    // Quoc.ho_ten = "Pham Anh Quoc";
    // Quoc.tuoi = 18;
    // Quoc.chieu_cao = 1.96;
    // cout << Quoc.ho_ten;
    // cout << endl;

    person person_list[100];
    int n;
    cout << "Nhap so nguoi can nhap: ";
    cin >> n;
    cin.ignore();
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap ho ten cua nguoi thu " << i + 1 << endl;
        getline(cin, person_list[i].ho_ten);
        cout << "Nhap tuoi cua " << person_list[i].ho_ten << " :" << endl;
        cin >> person_list[i].tuoi;
        cout << "Nhap chieu cao cua " << person_list[i].ho_ten << " :" << endl;
        cin >> person_list[i].chieu_cao;
        cout << "Nhap so do 3 vong cua " << person_list[i].ho_ten << " :" << endl;
        for (int j = 0; j < 3; j++)
        {
            cin >> person_list[i].so_do[j];
        }
        cin.ignore();
        cout << "Nhap so nha cua " << person_list[i].ho_ten << " :" << endl;
        getline(cin, person_list[i].address.so_nha);
        cout << "Nhap ten quan cua " << person_list[i].ho_ten << " :" << endl;
        getline(cin, person_list[i].address.ten_quan);
    }
    for(int i = 0; i < n; i++)
    {
        cout << "Sau day la thong tin cua " << person_list[i].ho_ten << " ma chung toi da thu thap duoc:" << endl;
        cout << "Day du ho ten: ";
        cout << person_list[i].ho_ten << endl;
        cout << "Tuoi hien tai la: " << person_list[i].tuoi << endl;
        cout << "Chieu cao hien tai la: " << person_list[i].chieu_cao << endl;
        cout << "So do 3 vong hien tai cua " << person_list[i].ho_ten << " lan luot la ";
        for (int j = 0; j < 3; j++)
        {
            cout << person_list[i].so_do[j] << " ";
        }
        cout << endl;
        cout << "Dia chi hien tai la: " << person_list[i].address.so_nha << " " << person_list[i].address.ten_quan << endl; 
    }
    cout << "Coding Success";
    return 0;
} 
