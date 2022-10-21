#include <iostream>
using namespace std;

struct data{
    string nama, alamat;
    int nomor, nilai;
};

int main()
{
    data  a,b,c;
    cout << "Masukan nama   = ";cin>>a.nama;
    cout << "Masukan alamat = ";cin>>a.alamat;
    cout << "Masukan nomor  = ";cin>>a.nomor;
    cout << "Masukan nama   = ";cin>>b.nama;
    cout << "Masukan alamat = ";cin>>b.alamat;
    cout << "Masukan nomor  = ";cin>>b.nomor;
    cout << "Masukan nama   = ";cin>>c.nama;
    cout << "Masukan alamat = ";cin>>c.alamat;
    cout << "Masukan nomor  = ";cin>>c.nomor;

    cout<<endl;
    cout << "Nama   = "<<a.nama;
    cout << "\nAlamat = "<<a.alamat;
    cout << "\nNomor  = "<<a.nomor;
    cout << "\nNama   = "<<b.nama;
    cout << "\nAlamat = "<<b.alamat;
    cout << "\nNomor  = "<<b.nomor;
    cout << "\nNama   = "<<c.nama;
    cout << "\nAlamat = "<<c.alamat;
    cout << "\nNomor  = "<<c.nomor;


    return 0;
}
