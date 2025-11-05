#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string teks;
    cout << "Masukkan teks: ";
    getline(cin, teks);

    cout << "Huruf besar: ";
    for(char c : teks) cout << (char)toupper(c);
    cout << endl;

    cout << "Huruf kecil: ";
    for(char c : teks) cout << (char)tolower(c);
    cout << endl;

    return 0;
}
