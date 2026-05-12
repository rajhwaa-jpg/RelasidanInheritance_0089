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

 