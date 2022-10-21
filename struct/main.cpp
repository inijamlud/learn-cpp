#include <iostream>

using namespace std;

struct alamat{
int rt;
int rw;
char desa[30];
char kec[30];
};

struct ktp{
int nik;
char nama[30];
char agama[30];
char kerja[30];
int nilai;
alamat loc;
};

int main()
{
    Masukkan banyak Data yang akan diinput =
    ktp a,f;
    cout << "DATA MANUSIA" << endl;
    cout << "Masukkan nama = ";cin>>a.nama;
    cout << "Masukkan nik = ";cin>>a.nik;
    cout << "Masukkan desa = ";cin>>a.loc.desa;
    cout << "Masukkan rt = ";cin>>a.loc.rt;
    cout << "Masukkan rw = ";cin>>a.loc.rw;

    cout<<endl;
    cout << "TERLAMPIR" << endl;
    cout << "Nama   = "<<a.nama<<endl;
    cout << "NIK    = "<<a.nik<<endl;
    cout << "Desa   = "<<a.loc.desa<<endl;
    cout << "RT     = "<<a.loc.rt<<endl;
    cout << "RW     = "<<a.loc.rw<<endl;

    return 0;
}
