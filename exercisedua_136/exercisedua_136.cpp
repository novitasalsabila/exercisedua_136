#include<iostream>
#include <vector>
#include <string>

using namespace std;

class Pengarang;
class Buku;

class Penerbit {
private:
    string nama_penerbit;
    vector<Pengarang*> daftar_pengarang;

public:
    Penerbit(string nama) : nama_penerbit(nama) {}

    string getNamaPenerbit() {
        return nama_penerbit;
    }

    void tambahPengarang(Pengarang* pengarang) {
        daftar_pengarang.push_back(pengarang);
    }

    vector<Pengarang*> getDaftarPengarang() {
        return daftar_pengarang;
    }
};

class Pengarang {//
private:
    string nama_pengarang;
    vector<Buku*> daftar_buku;
    vector<Penerbit*> daftar_penerbit;

public:
    Pengarang(string nama) : nama_pengarang(nama) {}

    string getNamaPengarang() {
        return nama_pengarang;
    }

    void tambahBuku(Buku* buku) {
        daftar_buku.push_back(buku);
    }

    void tambahPenerbit(Penerbit* penerbit) {
        daftar_penerbit.push_back(penerbit);
    }

    vector<Penerbit*> getDaftarPenerbit() {
        return daftar_penerbit;
    }

    vector<Buku*> getDaftarBuku() {
        return daftar_buku;
    }
};

class Buku {
private:
    string judul_buku;

public:
    Buku(string judul) : judul_buku(judul) {}

    string getJudulBuku() {
        return judul_buku;
    }
};

int main() {
    Penerbit* penerbit1 = new Penerbit("Gama press");
    Penerbit* penerbit2 = new Penerbit("Intan Pariwara");
    
    Pengarang* pengarang1 = new Pengarang("Joko");
    Pengarang* pengarang2 = new Pengarang("Lia");
    Pengarang* pengarang3 = new Pengarang("Giga");
    Pengarang* pengarang4 = new Pengarang("Asroni");

    Buku* buku1 = new Buku("Fisika");
    Buku* buku2 = new Buku("Algoritma");
    Buku* buku3 = new Buku("BasisData");
    Buku* buku4 = new Buku("Fisika");
    Buku* buku5 = new Buku("Matematika");
    Buku* buku6 = new Buku("Multimedia1");

    penerbit1->tambahPengarang(pengarang1);
    penerbit1->tambahPengarang(pengarang2);
    penerbit1->tambahPengarang(pengarang3);
    penerbit2->tambahPengarang(pengarang4);

    pengarang1->tambahBuku(buku1);
    pengarang1->tambahBuku(buku2);
    pengarang2->tambahBuku(buku3);
    pengarang4->tambahBuku(buku4);
    pengarang3->tambahBuku(buku5);
    pengarang3->tambahBuku(buku6);

    cout << "Daftar pengarang pada penerbit \"Gama Press\":" << endl;
    vector<Pengarang*> daftar_pengarang_penerbit1 = penerbit1->getDaftarPengarang();
    for (Pengarang* pengarang : daftar_pengarang_penerbit1) {
        cout << pengarang->getNamaPengarang() << endl;
    }
    cout << endl;

    cout << "Daftar pengarang pada penerbit \"Intan Pariwara\":" << endl;
    vector<Pengarang*> daftar_pengarang_penerbit2 = penerbit2->getDaftarPengarang();
    for (Pengarang* pengarang : daftar_pengarang_penerbit2) {
        cout << pengarang->getNamaPengarang() << endl;
    }
    cout << endl;

    
    cout << "Daftar penerbit yang diikuti \"Giga\":" << endl; 
    vector<Penerbit*> daftar_penerbit_giga = pengarang3->getDaftarPenerbit();
    for (Penerbit* penerbit : daftar_penerbit_giga) {
        cout << penerbit->getNamaPenerbit() << endl;
    }
    cout << endl;

    
    cout << "Daftar buku yang dikarang \"Joko\":" << endl; 
    vector<Buku*> daftar_buku_joko = pengarang1->getDaftarBuku();
    for (Buku* buku : daftar_buku_joko) {
        cout << buku->getJudulBuku() << endl;
    }
    cout << endl;

    cout << "Daftar buku yang dikarang \"Lia\":" << endl;
    vector<Buku*> daftar_buku_lia = pengarang2->getDaftarBuku();
    for (Buku* buku : daftar_buku_lia) {
        cout << buku->getJudulBuku() << endl;
    }
    cout << endl;

    cout << "Daftar buku yang dikarang \"Asroni\":" << endl;
    vector<Buku*> daftar_buku_asroni = pengarang4->getDaftarBuku();
    for (Buku* buku : daftar_buku_asroni) {
        cout << buku->getJudulBuku() << endl;
    }
    cout << endl;

    cout << "Daftar buku yang dikarang \"Giga\":" << endl;
    vector<Buku*> daftar_buku_giga = pengarang3->getDaftarBuku();
    for (Buku* buku : daftar_buku_giga) {
        cout << buku->getJudulBuku() << endl;
    }
    cout << endl;

    delete penerbit1;
    delete penerbit2;
    delete pengarang1;
    delete pengarang2;
    delete pengarang3;
    delete pengarang4;
    delete buku1;
    delete buku2;
    delete buku3;
    delete buku4;
    delete buku5;
    delete buku6;

    return 0;

}