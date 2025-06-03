#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama[5];

    nama[0] = "Fadli";
    nama[1] = "Anshari";
    nama[2] = "Pepen";
    nama[3] = "Rayhan";
    nama[4] = "Ijan";

    // Menampilkan data nama
    cout << "Daftar Nama:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << nama[i] << endl;
    }

    return 0;
}
