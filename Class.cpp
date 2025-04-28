#include <iostream>
using namespace std;

class Hewan{
    private:
    string jenisKelamin;
    public:
    string tipe;
    string umur;

    void inputData(){
        cout << "Masukkan Jenis Kelamin = " << endl;
        cin >> jenisKelamin;
        cout << "Masukkan Tipe = " << endl;
        cin >> tipe;
        cout << "Masukkan Usia = " << endl;
        cin >> umur;
    }
    void tampilHewan(){
        cout << "Jenis Kelaminnya Adalah = " << jenisKelamin << endl;
    }
};

int main(){
    Hewan ambon;
    ambon.inputData();
    cout << "Umurnya Adalah = " << ambon.umur << endl;
    cout << "Tipenya Adakah = " << ambon.tipe << endl;
    ambon.tampilHewan();
}

