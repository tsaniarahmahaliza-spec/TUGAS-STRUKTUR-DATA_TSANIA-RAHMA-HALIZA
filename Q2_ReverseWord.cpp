
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main() {
    char word[MAX_SIZE];
    char charStack[MAX_SIZE];
    int topIndex = -1;

    cout << "Enter a word: ";
    cin >> word;

    // Memasukkan setiap karakter ke Stack
    int i = 0;

    while (word[i] != '\0') {
        topIndex++;
        charStack[topIndex] = word[i];
        i++;
    }

    cout << "Original word: " << word << "\n";

    // Mengeluarkan karakter untuk membalik kata
    cout << "Reversed word: ";

    while (topIndex >= 0) {
        cout << charStack[topIndex];
        topIndex--;
    }

    cout << "\n";

    return 0;
}
