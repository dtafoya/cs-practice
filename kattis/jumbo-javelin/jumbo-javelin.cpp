#include <iostream>
using namespace std;

int main() {
    int rods, rodLength = 0, totalLength = 1;

    cin >> rods;

    int i = 0;
    while (i < rods) {
        cin >> rodLength;
        totalLength += rodLength;
        i++;
    }

    cout << totalLength - rods;

    return 0;
}