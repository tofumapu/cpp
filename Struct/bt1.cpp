#include <iostream>
#include <iomanip>
using namespace std;

struct NhanVien
{
    string ho_ten;
    int tuoi;
    double he_so_luong;
    
    // NhanVien(string name, int age, double base)
    // {
    //     ho_ten = name;
    //     tuoi = age;
    //     he_so_luong = base;
    // }
    void Nhap(int i)
    {
        cout << "Nhap thong tin nhan vien thu " << i + 1 << ": ";
        getline(cin, ho_ten);
        cout << "Nhap tuoi: ";
        cin >> tuoi;
        cout << "Nhap he so luong: ";
        cin >> he_so_luong;
        cin.ignore();
    }
    double solve(double he_so_luong)
    {
        return he_so_luong * 3800000;
    }

    void Xuat()
    {
        cout << fixed << setprecision(0);
        cout << "Tien luong cua " << ho_ten << " la: " << solve(he_so_luong) << endl;
    }
};
int main()
{
    int n; double tong = 0;
    cout << "Nhap so nhan vien: ";
    cin >> n;
    cin.ignore();
    NhanVien nhanVienList[n];
    for (int i = 0; i < n; i++)
    {
        nhanVienList[i].Nhap(i);
        tong = tong + nhanVienList[i].solve(nhanVienList[i].he_so_luong);
    }
    for (int i = 0; i < n; i++)
    {
        nhanVienList[i].Xuat();
    }
    cout << "Luong trung binh cua " << n << " nhan vien la: ";
    cout << fixed << setprecision(0) << tong/n;
}