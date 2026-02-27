#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama;
    string nim;
    float ipk;
}; 

int main() {
    Mahasiswa data_mhs[5];

    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nama mahasiswa " << i+1 << ": ";
        getline(cin, data_mhs[i].nama);
        cout << "Masukkan NIM mahasiswa " << i+1 << ": ";
        getline(cin, data_mhs[i].nim);
        cout << "Masukkan IPK mahasiswa " << i+1 << ": ";
        cin >> data_mhs[i].ipk;
        cin.ignore();
    }

    Mahasiswa mhs_tertinggi = data_mhs[0];
    for (int i = 1; i < 5; i++) {
        if (data_mhs[i].ipk > mhs_tertinggi.ipk) {
            mhs_tertinggi = data_mhs[i];
        }
    }

    cout << "\nMahasiswa IPK tertinggi:" << endl;
    cout << "Nama: " << mhs_tertinggi.nama << endl;
    cout << "NIM: " << mhs_tertinggi.nim << endl;
    cout << "IPK: " << mhs_tertinggi.ipk << endl;
    
    return 0;
}
