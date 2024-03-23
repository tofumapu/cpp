#include <iostream>
#include <string>

struct Dia_chi{
    std::string so_nha;
    std::string ten_quan;
};
struct Person{
    std::string ho_ten;
    int tuoi;
    float chieu_cao;
    int so_do[3];
    Dia_chi dia_chi;

    Person()
    {
        std::cout << "Da khoi tao bang ham person khong tham so\n";
    }
    Person(std::string name, int age) // construction: ham khoi tao
    {
        std::cout << "Da khoi tao bang ham person co tham so\n";
        ho_ten = name;
        tuoi = age;
        // Note: khi goi ham khoi tao, ta khong the goi ham Person o ham main nua
        // Cach xu ly
    }

    void gioi_thieu_ban_than()
    {
        std::cout << "Xin chao!\nToi la: " << ho_ten << "\n";
        std::cout << "Nam nay toi " << tuoi << " tuoi";
        std::cout << "\n";
    }
    void loi_thu_toi_cua_ban_than()
    {
        std::cout << "That ra truoc gio toi bi gay nhung toi khong noi cho moi nguoi biet!\n";
        std::cout << "Hay tha thu cho toi neu mot ngay nao do chai dau an neptune tren giuong cua ban!\n";
    }
    void gioi_thieu_ban_than(std::string message)
    {
        std::cout << "Xin chao!\nToi la: " << ho_ten << "\n";
        std::cout << "Nam nay toi " << tuoi << " tuoi";
        std::cout << "\n" << message;
    }
};

int main(){
    Person p("Vo Duy Hieu", 17);  
    // p.tuoi = 30;
    // p.ho_ten = "Vo Duy Hieu";
    p.gioi_thieu_ban_than();
    p.loi_thu_toi_cua_ban_than();

    Person p2;
    p2.ho_ten = "Pham Anh Quoc";
    p2.tuoi = 18;
    p2.gioi_thieu_ban_than();
}