#include <iostream>

using namespace std;

int main(){
    // Tim hieu ve cau truc dieu kien trong C++
    // ban chat la yeu cau may tinh ra duoc cach xu li cac tinh huong khac nhau
    int my_age = 20;
    if (my_age > 18){
        cout << " tuoi cua ban da du den di xe may" << endl; 
    } else {
        cout << "ban chua du tuoi de hoc lai" << endl;
    }
    // if : keyword bat buoc phai ghi nho và viet chinh xac
    // () : cu phap bieu dien cho if : my_age > 18(bieu dien dieu kien)
    // {} : cu phap xu li logic cho dieu kien
    // Neu bieu thuc dieu kien la DUNG(true) thi se thuc hien lenh ben trong dau {}
    // Neu bieu thuc dieu kien la SAI(false) thi se khong thuc hien lenh ben trong dau {}
    // else: Keyword va se thuc thi lenh benh trong {} ma bieu thuc dieu kien trong if la SAI(false)
    // if else dang bac thang
    float my_point = 7.5;
    if (my_point < 5.0){ 
        cout << "hoc luc kem" << endl;
    } else if (my_point >= 5.0 && my_point <=7.0){
        cout << "hoc luc kha" << endl;
    } else if (my_point >= 7.0 && my_point <= 9.0){
        cout << "Hoc luc tot" << endl;
    } else if (my_point >=9.0 && my_point <=10){
        cout << "Hoc luc xuat sac" << endl;
    } else {
        cout << "Truot mon" << endl;
    }
    // if else long nhau (nested)
    // xu li bai toan ax + b = 0
    float hsa = 3;
    float hsb = -6;
    // 3x - 6 = 0;
    if (hsa == 0){
        if (hsb == 0) {
             cout << "PT vo so no" << endl;
        } else {
            // hsb != 0 ~ 0x + b = 0
            cout << "PT vo no" << endl; 
        }
    } else {
        // hsa != 0
        float result = -hsb/hsa;
        cout << "PT co no la : " << result << endl;
    }
    
return 0;
}