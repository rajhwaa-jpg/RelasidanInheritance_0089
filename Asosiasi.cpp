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

//pembuatan class dokter
class dokter {

public:
    //deklarasi  member variable dari class dokter
    string nama;
    vector<pasien*> daftar_pasien;

    //pembuatan constructor dan destructor dari class dokter
    dokter(string pNama) :nama(pNama) {
        cout << "Dokter \"" << nama << "\" ada\n";
    }

    ~dokter() {
        cout << "Dokter \"" << nama << "\" tidak ada\n";
    }

    //deklarasi prosedur tambahanPasien() dan cetakPasien()
    void tambahanPasien(pasien*);
    void cetakPasien();

};

