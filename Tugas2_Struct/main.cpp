#include <iostream>

using namespace std;

struct tgl_pinjam{
int d, m, y;
};

struct kode_buku{
string No;
char cat;
};

struct peminjam{
string nama;
int nim;
tgl_pinjam tgl;
kode_buku book;
};


int main()
{
    int g;
    cout << " Masukkan data yang akan diinput = ";cin>>g;
    cout << endl;
    peminjam p[g];
    cout << "==============FORM PEMINJAMAN BUKU==============" << endl;
    for(int i=0;i<g;i++){
    cout << " Tanggal (dd)   = ";cin>>p[i].tgl.d;
    cout << " Bulan   (mm)   = ";cin>>p[i].tgl.m;
    cout << " Tahun   (yyyy) = ";cin>>p[i].tgl.y;
    cout << "------------------------------------------------" <<endl;
    cout << " NIM            = ";cin>>p[i].nim;
    cout << " NAMA           = ";cin>>p[i].nama;
    cout << "------------------------------------------------" <<endl;
    cout << " KODE BUKU        \n";
    cout << " NO. RAK        = ";cin>>p[i].book.No;
    cout << " KATEGORI (R/U) = ";cin>>p[i].book.cat;
    cout << endl;cout << endl;cout << endl;
    }

    cout << "================================================" << endl;
    cout << "              DAFTAR PINJAM BUKU" << endl;
    cout << "================================================" << endl;
    for(int i=0;i<g;i++){
    cout << " Tanggal pinjam = "<<p[i].tgl.d<<"/"<<p[i].tgl.m<<"/"<<p[i].tgl.y<<endl;
    cout << "------------------------------------------------" <<endl;
    cout << " NIM            = "<<p[i].nim<<endl;
    cout << " NAMA           = "<<p[i].nama<<endl;
    cout << "------------------------------------------------" <<endl;
    cout << " Kode Buku      = "<<p[i].book.No<<"-"<<p[i].book.cat;
    cout << endl;cout << endl;
    }

}
