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

//pendaftaran prosedur . prosedur  dari  class dokter dan class pasien diluar class
void pasien::tambahanDokter(dokter* pDokter) {
    daftar_dokter.push_back(pDokter);
};

void pasien::cetakDokter() {
    cout << "Daftar Dokter dari Pasien \"" << this->nama << "\";\n";
    for (auto& a : daftar_dokter)
    {
        cout << a->nama << "\n";
    }
    cout << endl;
}

void dokter::tambahanPasien(pasien* pPasien) {
    daftar_pasien.push_back(pPasien);
    pPasien->tambahanDokter(this);
}

void dokter::cetakPasien() {
    cout << "Daftar Pasien dari Dokter \"" << this->nama << "\";\n";
    for (auto& a : daftar_pasien)
    {
        cout << a->nama << "\n";
    }
    cout << endl;
}

int main() {
  dokter*varDokter1 = new dokter("dr.budi");
  dokter*varDokter2 = new dokter("dr.cuti");
  pasien*varPasien1 = new pasien("lontong");
  pasien*varPasien2 = new pasien("rusdi");

  varDokter1->tambahanPasien(varPasien1);
  varDokter1->tambahanPasien(varPasien2);
  varDokter2->tambahanPasien(varPasien1);

  varDokter1->cetakPasien();
  varDokter2->cetakPasien();
  varPasien1->cetakDokter();
  varPasien2->cetakDokter();

  return 0;
}
