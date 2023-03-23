#include <iostream>
using namespace std;

int main() {
    int n, temp, total = 0;

    cin >> n;

    int i = 0;
    while (i + 1 < n + 1) {
        cin >> temp;
        total += temp;
        i++;
    }

    cout << total;

    return 0;
}