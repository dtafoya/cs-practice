#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    char c1, c2;

    cin >> num1 >> num2 >> num3;

    if (num1 + num2 == num3) {
        c1 = '+';
        c2 = '=';
    }
    else if (num1 - num2 == num3) {
        c1 = '-';
        c2 = '=';
    }
    else if (num1 * num2 == num3) {
        c1 = '*';
        c2 = '=';
    }
    else if (num1 / num2 == num3) {
        c1 = '/';
        c2 = '=';
    }
    else if (num1 == num2 + num3) {
        c1 = '=';
        c2 = '+';
    }
    else if (num1 == num2 - num3) {
        c1 = '=';
        c2 = '-';
    }
    else if (num1 == num2 * num3) {
        c1 = '=';
        c2 = '*';
    }
    else {
        c1 = '=';
        c2 = '/';
    }

    cout << num1 << c1 << num2 << c2 << num3;

    return 0;
}