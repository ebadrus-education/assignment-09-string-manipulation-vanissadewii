#include <iostream>
using namespace std;

int main() {
    string teks, cari;
    cout << "Masukkan kalimat: ";
    getline(cin, teks);

    cout << "Kata yang dicari: ";
    getline(cin, cari);

    int pos = teks.find(cari);
    if (pos != string::npos)
        cout << "Posisi ditemukan di indeks: " << pos << endl;
    else
        cout << "Kata tidak ditemukan." << endl;

    return 0;
}
