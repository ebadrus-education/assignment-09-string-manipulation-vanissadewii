#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks, pengganti;
    int pos, jumlah;
    cout << "Masukkan teks: ";
    getline(cin, teks);

    cout << "Mulai ganti dari indeks ke-: ";
    cin >> pos;
    cout << "Jumlah karakter yang diganti: ";
    cin >> jumlah;
    cin.ignore(); // buang enter
    cout << "Ganti dengan teks: ";
    getline(cin, pengganti);

    teks.replace(pos, jumlah, pengganti);
    cout << "Setelah replace: " << teks << endl;
    return 0;
}
