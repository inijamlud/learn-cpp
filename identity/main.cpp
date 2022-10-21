#include <iostream>

using namespace std;

int main()
{
    string nama, alamat, tl, hp, email, pkj;
    cout<<"\n========= DATA KARTU TANDA PENDUDUK========"<<endl;
    cout<<"Masukkan nama anda = ";
    cin>>nama;
    cout<<"Masukkan alamat anda = ";
    cin>>alamat;
    cout<<"Masukkan tempat lahir anda = ";
    cin>>tl;
    cout<<"Masukkan no hp anda = ";
    cin>>hp;
    cout<<"Masukkan email anda = ";
    cin>>email;
    cout<<"Masukkan pekerjaan anda = ";
    cin>>pkj;

    cout<<"\n=========KARTU TANDA PENDUDUK========"<<endl;
    cout<<"====PROVINSI JAWA BARAT===="<<endl;
    cout<<"Nama : "<<nama<<endl;
    cout<<"Alamat : "<<alamat<<endl;
    cout<<"Tempat lahir : "<<tl<<endl;
    cout<<"Nomor hp : "<<hp<<endl;
    cout<<"Email : "<<email<<endl;
    cout<<"Pekerjaan : "<<pkj<<endl;
    return 0;
}
