#include <iostream>

using namespace std;

int main() {
    // cau truc dang switch...case
    // ktr 1 thang co bao nhieu ngay
    int month = 2; // co the thay doi tu 1 den 12
    switch(month) {
        case 1: // so sang month == 1
        cout << "thang co 31 ngay" << endl;
        break; // khong thuc thi cau lenh ben duoi/thoat khoi switch
        case 2: // so sang minth == 2
        cout << "thang co 28 ngay" << endl;
        break;
        // cac thang khac
        case 12:
        cout << "thang co 31 ngay" << endl;
        break;
        default:
        cout << "chi nhap tu 1 den 12" << endl;
        break;
    }
    // duyet_ chay lan luot tu 1 den 10
    // kiem tra dau la so dau tien chia het cho 3 in ra ngay( k can in ra cac so khac)
    





    return 0;

}