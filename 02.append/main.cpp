#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cout << "Masukkan teks pertama: ";
    getline(cin, a);
    cout << "Masukkan teks kedua: ";
    getline(cin, b);

    cout << "Hasil a + b: " << a + b << endl;
    a.append(b);
    cout << "Hasil append(): " << a << endl;
    return 0;
}
