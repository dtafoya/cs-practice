#include <iostream>
using namespace std;

int main() {
    string month;
    int day;

    cin >> month >> day;

    if (month == "OCT") {
        if (day == 31) { cout << "yup"; }
        else cout << "nope";
    }
    else if (month == "DEC") {
        if (day == 25) { cout << "yup"; }
        else cout << "nope";
    }
    else cout << "nope";

    return 0;
}