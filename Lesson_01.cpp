#include <iostream>
#include <string>

using namespace std;
#define BASIC_SALARY 300
// #define: keywork khai bao hang so
// BASIC_SALARY: Ten cua hang so
// 300 : gia tri cua hang so
// hang so: gia tri cua no khong bi thay doi trong qua trinh thuc thi

int main(){
    // xy ly logic code o day
    // khai bao 1 bien luu tru ho ten
    string full_name = "Mai Lam Gia Bao";
    // khai bao 1 bien luu tru tuoi
    int my_age = 20;
    // khai bao 1 bien luu tru dia chi
    string my_address =  "Quang Tri";
    // int a; // khong nen viet
    // int b; // khong nen viet
    bool checking = true;
    char letter = 'A'; // su dung dau ''
    float my_point = 8.9; // so thuc
    double my_money = 100.234; // so thuc

    cout << full_name << endl; // in ho ten
    cout << my_money << endl; // in so tien
    cout << "Muc luong co ban : " << BASIC_SALARY << endl;
    // su dung tu khoa constant de khai bao hang so
    const double PI = 3.14; // hang so
    cout << "Gia tri cua so PI : " << PI << endl;
    // uu tien su dung tu khoa constant den khai bao hang so (han che su dung #define) 

     return 0;
}