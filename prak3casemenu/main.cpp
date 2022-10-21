#include <iostream>

using namespace std;

int main()
{
    int um, ma, mi;
    cout <<"Menu Pesanan\n";
    cout <<"1. Makanan\n";
    cout <<"2. Minuman\n";
    cout <<"Masukkan pilihan : ";
    cin>>um;
    switch (um)
    {
    case 1:
        cout<<"\nMenu Makanan\n";
        cout <<"1. AYAM\n";
        cout <<"2. SAPI\n";
        cout <<"masukan pilihan : ";
        cin>>ma;
        switch (ma)
        {
        case 1:
            cout<<"Anda memilih ayam";
            break;
        case 2:
            cout<<"anda memilih sapi";
            break;
        default:
            cout<<"anda salah memasukan pilihan";
            break;
        }
        break;

    case 2:
        cout<<"\nMenu Minuman\n";
        cout <<"1. AQUA\n";
        cout <<"2. MIZONE\n";
        cout <<"masukan pilihan : ";
        cin>>mi;
        switch (mi)
        {
        case 1:
            cout<<"Anda memilih aqua";
            break;
        case 2:
            cout<<"anda memilih mizone";
            break;
        default:
            cout<<"anda salah memasukan pilihan";
            break;
        }
        break;

    default:
        cout<<"anda salah memasukan pilihan";
        break;
    }
    return 0;
}
