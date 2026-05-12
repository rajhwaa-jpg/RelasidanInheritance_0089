#include <iostream>
#include <vector>
#include <string>
using namespace std;

//penyertaan file header anak.h dan ibu.h
#include "ibu.h"
#include "anak.h"

int main()
{
    
    //deklarasi dan pemberian nilai variable pointer untuk objek dari class ibu dan anak
    Ibu* varIbu = new Ibu("rani");
    Ibu* varIbu2 = new Ibu("sari");
    anak* varAnak = new anak("tono");
    anak* varAnak2 = new anak("tiara");
    anak* varAnak3 = new anak("dini");

    //pemanggilan dan pemberian argument pada prosedur tambahAnak()
    varIbu->tambahAnak(varAnak);
    varIbu->tambahAnak(varAnak2);
    varIbu2->tambahAnak(varAnak3);
    
    
}
