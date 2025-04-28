#include <iostream>
using namespace std;    

class lingkaran {
    public:
    double jarijari;
    double luas;

    void inputdata() {
        cout << "masukkan jarijari : ";
        cin >> jarijari;
    }
    double hitungluas() {
        
        luas = 3.14 * jarijari * jarijari;
        return luas;
    }
};



int main() {
    lingkaran talingkar;
    talingkar.inputdata();
    cout << "luasnya : " << talingkar.hitungluas() << endl; 

}