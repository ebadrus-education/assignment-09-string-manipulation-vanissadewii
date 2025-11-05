#include <iostream>

using namespace std;

int main() {
    string teks;
    int pos, jumlah;
    cout << "Masukkan teks: ";
    getline(cin, teks);

    cout << "Mulai dari indeks ke-: ";
    cin >> pos;
    cout << "Ambil berapa karakter: ";
    cin >> jumlah;

    cout << "Hasil substr: " << teks.substr(pos, jumlah) << endl;
    return 0;
}
