#include <iostream>
#include <string>
using namespace std;

int main() {
    //GUNAKANLAH HANYA PERCABANGAN, PERULANGAN DAN OPERATOR.

    long long nomorKartu;
    string tipeKartu;
    cout << "Masukkan Nomor Kartu Digital: ";
    cin >> nomorKartu;

    int panjang = 0, duaDigitAwal;
    long long temp = nomorKartu;
    while (temp >= 100) { //untuk mendapatkan panjang nomor kartu - 2
        temp /= 10;
        panjang++;
    }

    if (temp < 100) {
        duaDigitAwal = temp; 
        panjang = panjang + 2; //untuk mendapatkan panjang nomor kartu dan dua digit awalnya
    }

    if (panjang == 14 && duaDigitAwal == 65) { //untuk mendapatkan tipe kartu
        tipeKartu = "NUSANTARA";
    }
    else if (panjang == 16 && (duaDigitAwal == 77 || duaDigitAwal == 78)) {
        tipeKartu = "GARUDA";
    }
    else if (panjang == 15 && (duaDigitAwal == 91)) {
        tipeKartu = "MERDEKA";
    }
    cout << "Nomor Kartu Digital: " << nomorKartu << endl;
    cout << "Tipe Kartu Digital: " << tipeKartu << endl;
    
}
