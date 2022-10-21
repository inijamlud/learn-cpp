#include <iostream>
using namespace std;

struct dabel
{
    string nama, id;
    int harga, kuan;
};
int main()
{
    int ji;
    cout<<"masukkan jumlah barang yang akan diinput = ";
    cin>>ji;
    dabel data[ji];
    cout<<"==============Program Kasir==============" << endl;
    cout<<endl<<"---Input Barang---"<<endl;
    for (int x=0; x<ji; x++)
    {
        cout<<"Nama Barang         = ";
        cin>>data[x].nama;
        cout<<"Nomor Barang        = ";
        cin>>data[x].id;
        cout<<"Harga Barang Satuan = ";
        cin>>data[x].harga;
        cout<<"Banyak Barang       = ";
        cin>>data[x].kuan;
        cout<<endl;
    }

    cout<<endl<<"HAI TAYO SHOP"<<endl;
    cout<<"==============================================="<<endl;
    cout<<"NAMA\t\tqty\t\tHarga\tTotal"<<endl;
    cout<<"==============================================="<<endl;

    for (int x=0; x<ji; x++)
    {
        int total;
        total=data[x].kuan*data[x].harga;
        cout<<data[x].nama<<"\t\t"<<data[x].kuan<<"\t"<<data[x].harga<<"\t\t"<<total<<endl;
    }

    int totall=0;
    for (int x=0; x<ji; x++)
    {
        totall=totall+(data[x].kuan*data[x].harga);
    }
    cout<<"==============================================="<<endl;
    cout<<"\t\tTotal               = Rp "<<totall;
    return 0;
}
