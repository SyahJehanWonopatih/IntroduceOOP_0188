#include <iostream>
using namespace std;

class hewan {
    private:
    string jenisKelamin;
    public:
    string tipe;
    string umur;

    void inputdata() {
        cout << "masukkan jenis kelamin : ";
        cin >> jenisKelamin;
        cout << "masukkan tipe : ";
        cin >> tipe;
        cout << "masukkan umur : ";
        cin >> umur;
    }
    void tampilfirji() {
        cout << "jenis kelamin : " << jenisKelamin << endl;
    }
};

int main() {
    hewan firji;
    firji.inputdata();
    cout << "umurnya adalah : " << firji.umur << endl;
    cout << "tipenya adalah : " << firji.tipe << endl;
    firji.tampilfirji();
}