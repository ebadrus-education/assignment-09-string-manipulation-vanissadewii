#include <iostream>
using namespace std;

int main() {
    string teks;
    int pos, jumlah;
    cout << "Masukkan teks: ";
    getline(cin, teks);

    cout << "Hapus mulai indeks ke-: ";
    cin >> pos;
    cout << "Jumlah karakter yang dihapus: ";
    cin >> jumlah;

    teks.erase(pos, jumlah);
    cout << "Setelah dihapus: " << teks << endl;
    return 0;
}
