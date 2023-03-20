#include <iostream>
using namespace std;

int main() {
    bool hiss = false;
    string word;

    cin >> word;

    for (int i = 0; i < word.size(); i++) {
        if (word[i] == 's') {
            if (word[i + 1] == 's') {hiss = true;}}
    }

    if (hiss) cout << "hiss";
        else cout << "no hiss";

    return 0;
}