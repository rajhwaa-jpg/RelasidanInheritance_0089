#include <iostream>
#include <vector>
using namespace std;

//deklarasi classs dokter
class dokter;

//deklarasi class pasien
class pasien {

public:
    //deklarai member constructor dan destructor dari clas pasien
    string nama;
    vector<dokter*> daftar_dokter;

    //pembuatan constructor dan destructor dari class pasien
    pasien(string pNama) :nama(pNama) {
        cout << "Pasien \"" << nama << "\" ada\n";
    };

    ~pasien() {
        cout << "pasien \"" << nama << "\"" << " tidak ada\n";
    };

    //deklarasi prosedur tambahanDokter() dan cetakDokter()
    void tambahanDokter(dokter*);
    void cetakDokter();
};

