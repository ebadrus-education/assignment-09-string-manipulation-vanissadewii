#include <iostream>

using namespace std;

int main()
{
    string nama;
    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Panjang string: " << nama.length() << endl;
    return 0;
}
