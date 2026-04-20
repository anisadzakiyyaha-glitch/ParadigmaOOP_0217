#include <iostream>
#include <string>
using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printData() {
        cout << "Nama             : " << nama << endl;
        cout << "Jumlah           : " << jumlah << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
    }
};

int main() {
    Barang elektronik;
    elektronik.nama = "Laptop";
    elektronik.jumlah = 15;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "01-03-2024";

    Barang nonElektronik;
    nonElektronik.nama = "Buku Tulis";
    nonElektronik.jumlah = 200;
    nonElektronik.kategori = "Alat Tulis";
    nonElektronik.tanggalProduksi = "15-07-2023";

    cout << "--- Data Barang Elektronik ---" << endl;
    elektronik.printData();

    cout << "\n--- Data Barang Non-Elektronik ---" << endl;
    nonElektronik.printData();
}