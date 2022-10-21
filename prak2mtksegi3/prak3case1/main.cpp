#include <iostream>

using namespace std;

int main()
{
    /*
        int b,c;
        cout<<"\nMasukkan Batas Awal = ";
        cin>>b;
        cout<<"Masukkan Batas akhir = ";
        cin>>c;
        for (b; b<=c; b++)
        {
            cout<<b<<endl;
        }

    */

    int c,b,pil;

    cout<<"\nMasukkan Batas Awal = ";
    cin>>b;
    cout<<"Masukkan Batas Akhir = ";
    cin>>c;
p:
    cout<<"1. Cetak Ganjil "<<endl;
    cout<<"2. Cetak Genap "<<endl;
    cout<<"Masukkan pilihan Cetak = ";
    cin>>pil;
    switch (pil)
    {
    case 1:
        for (int a=b; a<=c; a++)
        {
            if (a%2==1)
            {
                cout<<a<<endl;
            }
        }
        goto p;
        break;

    case 2:
        for (int a=b; a<=c; a++)
        {
            if (a%2==0)
            {
                cout<<a<<endl;
            }
        }
        goto p;
        break;

    default:
        cout<<"Anda Salah Memasukan Pilihan"<<endl;
        goto p;
        break;
    }
}
