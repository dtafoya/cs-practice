#include <iostream>
using namespace std;

int main() {
    int words, i = 1;
    string word;

    cin >> words;

    while (i < words + 1) {
        cin >> word;
        if (i % 2 != 0) {cout << word << endl; }
        i++;
    }

    return 0;
}