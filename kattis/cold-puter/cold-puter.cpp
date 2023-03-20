#include <iostream>
using namespace std;

int main() {
    int numOfTemps, temp, count = 0, x = 0;

    cin >> numOfTemps;

    while (x < numOfTemps) {
        cin >> temp;
        if (temp < 0) count++;
        x++;
    }

    cout << count;

    return 0;
}