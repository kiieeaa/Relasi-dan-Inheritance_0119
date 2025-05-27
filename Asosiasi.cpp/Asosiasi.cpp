#include <iostream>
#include <vector>
using namespace std;

class doktor;

class pasien{
    public:  //asosiasi
     string nama;
     vector<doktor*> daftar_doktor;
     pasien(string pNama) : nama(pNama) {
        cout << "Pasien \"" << nama << "\" ada\n";
     }

     ~pasien() {
        cout <<"Pasien \"" << nama
        << "\" tidak ada\n";
     }
}