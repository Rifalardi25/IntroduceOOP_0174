#include <iostream>
using namespace std;

class lingkaran{
    public:
    double jariJari;
    double luasLingkaran;

    void inputdata(){
        cout << "Masukkan Jari - Jari Lingkaran = ";
        cin >> jariJari;
    }

    double hitungluas(){
        return  3.14 * jariJari * jariJari;
    }
};

int main(){
    lingkaran bunder;
    bunder.inputdata();
    cout << endl;
    bunder.hitungluas();
    cout << "Luasnya Adalah = " << bunder.hitungluas() << endl;
    cout << endl;

}