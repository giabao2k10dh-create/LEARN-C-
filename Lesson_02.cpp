#include <iostream>

using namespace std;

int main(){
    // short syntax
    int number1 = 10;
    int number2 = 11;
    number1 += number2; // number1 = number1 +number2
    // x += y // x=x+y
    // x -= y // x=x-y
    // x /= y // x=x/y
    // x *= y // x=x*y
    // x %= y // x=x%y
    cout << number1 << endl;
    int number3 = 10;
    int number4 = 20;
    number4 /= number3; // number4 = number4 / number3
    cout << number4 << endl;

    int number5 = 6;
    int number6 = 8;
    number5++; // cong them mot don vi - tang sau
    ++number6; // cong them mot don vi - tang truoc
    number5--; // tru them mot don vi - giam sau
    --number6; // tru them mot don vi - giam truoc
    int n1 = 9;
    int n2 = 8;
    int n3 = (n1++) - (n2++) + (--n2) + (n1--) - (n2++) + (--n1);
    // n3 = ? (10)  - (8)    + (8)    + (10)   - (8)    + (8)
    cout << n3 << endl;

    return 0;
}