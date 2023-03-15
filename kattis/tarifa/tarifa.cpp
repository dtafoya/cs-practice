#include <iostream>
using namespace std;

int main() {
    int mbPerMonth, months, mbSpent, mbLeft;

    cin >> mbPerMonth >> months;

    mbLeft = mbPerMonth * (months + 1);

    for (int i = 0; i < months; i++) {
        cin >> mbSpent;
        
        mbLeft -= mbSpent;
    }

    cout << mbLeft;

    return 0;
}