#include <iostream>

using namespace std;
 int main(){
    // kiem tra do dai cua 3 canh co tao thanh 1 tam giac hay khong?
    // a, b, c: a + b > c, && a + c > b, && b + c > a
    // input: du lieu dau vao ? do dai ba canh
    int canh_thu_nhat = 3;
    int canh_thu_hai = 4;
    int canh_thu_ba = 5;
    // output ? thong bao co tao thanh 1 taom gia khong
    // thuat toan la cach giai quyet van de (**)
    if (canh_thu_nhat + canh_thu_hai > canh_thu_ba && canh_thu_hai + canh_thu_ba > canh_thu_nhat && canh_thu_nhat + canh_thu_ba > canh_thu_hai) {
        cout << "do dai ba canh tao thanh 1 tam giac" << endl;
    } else {
        cout << "do dai ca canh k tao thanh mot cam giac" << endl;
    }
    // kiem tra xem 1 nam duong lich co nhuan khong
    // 1 nam nhuan co 366 ngay: 29-2
    // chu ky 4 nam 1 lan
    // thuat toan : 1 nam chi het cho 400 thi do la nam nhuan
    // 1 nam chi het cho 4 nhung khong chia het cho 100 => nam nhuan duong lich
    // input : nhap vao 1 nam duong lich de ktr
    // output : thong bao
    int year = 2028;
    if ( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) ) {
        cout << " nam " << year << " la nam nhuan duong lich" << endl;
    } else {
        cout << "nam " << year << " khong la nam nhuan" << endl; 
    }
    // alias cua if else
    int number1 = 9;
    int number2 = 10;
    int number3 = (number2 - number1 < number1 - number2) ? number1 : number2;
    // toan tu dieu kien trong C++(toan tu ba ngoi)
    cout << number3 << endl;
    int number4;
    if (number2 - number1 < number1 - number2) {
        number4 = number1;
        // xu li logic o day ?
    } else {
        number4 = number2;
    }
    cout << number4 << endl; // 10
    int a = 4;
    int b = 5;
    int c = ( a % b > b % a ) ? (a + b < b+a ? a : b) : (b-a > a-b ? b : a);
    cout << c << endl;

    
    return 0;
 }