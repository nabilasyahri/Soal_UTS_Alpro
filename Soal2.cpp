#include <iostream>
using namespace std;

int main() {
    long long kodeParkir;
    int jamKeluar, menitKeluar, jamMasuk = 0, durasiParkir, lokasiParkir = 0, totalBiaya, i=1, jenisKendaraan = 0, menitMasuk = 0;

    cout << "Masukkan kode parkir digital (10 digit): ";
    cin >> kodeParkir;
    cout << "Masukkan jam keluar (format HHMM): ";
    cin >> jamKeluar;

    menitKeluar = jamKeluar % 100;
    jamKeluar = jamKeluar / 100; 

    while (kodeParkir > 0) { //2014506325
        int digit = kodeParkir % 10;

        switch (i)
        {
        case 1:
            lokasiParkir = lokasiParkir + (digit * 1);
            break;
        case 2:
            lokasiParkir = lokasiParkir + (digit * 10);
            break;
        case 3:
            lokasiParkir = lokasiParkir + (digit * 100);
            break;
        case 4:
            lokasiParkir = lokasiParkir + (digit * 1000);
            break;
        case 5:
            menitMasuk = menitMasuk + (digit * 1);
            break;
        case 6:
            menitMasuk = menitMasuk + (digit * 10);
            break;
        case 7:
            jamMasuk = jamMasuk + (digit * 1);
            break;
        case 8:
            jamMasuk = jamMasuk + (digit * 10);
            break;
        case 9:
            jenisKendaraan = jenisKendaraan + (digit * 1);
            break;
        case 10:
            jenisKendaraan = jenisKendaraan + (digit * 10);
            break;
        default:
            cout << "Kode parkir tidak valid (lebih dari 10 digit)" << endl;
            break;
        }
        kodeParkir = kodeParkir / 10; 
        i++;
    }

    return 0;
}