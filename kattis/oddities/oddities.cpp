#include <iostream>
using namespace std;

int main() {
    int nums, num;

    cin >> nums;

    for (int i = 0; i < nums; i++) {
        cin >> num;

        if (num % 2 == 0) {
            cout << num << " is even" << endl;
        }
        else cout << num << " is odd" << endl;
    }

    return 0;
}