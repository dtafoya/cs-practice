#include <iostream>
using namespace std;

int main() {
    int cases, notAdvertise, advertise, cost, profit;

    cin >> cases;

    for (int i = 0; i < cases; i++) {
        cin >> notAdvertise >> advertise >> cost;

        profit = advertise - cost;

        if (notAdvertise > profit) {
            cout << "do not advertise" << endl;
        }
        else if (notAdvertise < profit) {
            cout << "advertise" << endl;
        }
        else cout << "does not matter" << endl;
    }

    return 0;
}