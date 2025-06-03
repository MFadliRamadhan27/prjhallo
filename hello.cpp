#include <iostream>
#include <string>
using namespace std;

int main() {
    int jumlah;

    // Meminta user memasukkan jumlah nama
    cout << "Masukkan jumlah nama yang akan diproses: ";
    cin >> jumlah;

    // Inisialisasi array dinamis
    string* nama = new string[jumlah];

    // Input nama-nama
    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan nama ke-" << i + 1 << ": ";
        cin >> nama[i];
    }

    // Menampilkan nama-nama
    cout << "\nDaftar Nama:" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << i + 1 << ". " << nama[i] << endl;
    }

    // Menghapus alokasi memori dinamis
    delete[] nama;

    return 0;
}
