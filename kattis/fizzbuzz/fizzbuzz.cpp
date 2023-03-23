#include <iostream>
using namespace std;

int main() {
    int x, y, n;

    cin >> x >> y >> n;

    int i = 1;
    while (i < n + 1) {
        if (i % x == 0 && i % y == 0) {
            cout << "FizzBuzz" << endl;
        }
        else if (i % x == 0) {
            cout << "Fizz" << endl;
        }
        else if (i % y == 0) {
            cout << "Buzz" << endl;
        }
        else cout << i << endl;
        i++;
    }

    return 0;
}