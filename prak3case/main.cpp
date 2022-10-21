#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"MENU PESANAN";
    cout<<"1. Makanan";
    cout<<"2. Minuman";
    cout<<"3. Exit";
    cout<<"Masukkan pilihan : ";
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"Menu Makanan";
        cout<<"1. Ayam";
        cout<<"2. Daging";
        cout<<"Masukkan pilihan : ";
        cin>>b;
        switch (b)
        {
        case 1:
            cout<<"Anda Memilih ayam";
            break;
        case 2:
            cout<<"Anda Memilih daging";
            break;
        default:
            cout<<"anda salah memasukan pilihan";
            break;
        }
        break;
    case 2:
        cout<<"Menu Makanan";
        cout<<"1. Ayam";
        cout<<"2. Daging";
        cout<<"Masukkan pilihan : ";
        cin>>b;
        switch (b)
        {
        case 1:
            cout<<"Anda Memilih ayam";
            break;
        case 2:
            cout<<"Anda Memilih daging";
            break;
        default:
            cout<<"anda salah memasukan pilihan";
            break;
        }
        break;
    }
}
