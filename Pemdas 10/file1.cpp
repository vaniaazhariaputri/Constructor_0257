#include <iostream>
#include <string>
using namespace std;
class barang{
    private:
    string namaBarang;
    string kodeBarang;

    public:
    barang(string nama, string kode){
    namaBarang = nama;
    kodeBarang = kode;
}

// Menampilkan informasi barang
void tampilkanInfo() {
    cout << "Nama Barang : " << namaBarang << endl;
    cout << "Kode Barang : " << kodeBarang << endl;
}

};

int main(){
    //Membuat object barang
    barang barang1("Buku", "T002");

    //Menampilkan informasi barang
    barang1.tampilkanInfo();

    return 0;
}


