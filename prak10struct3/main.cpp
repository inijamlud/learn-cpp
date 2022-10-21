#include <iostream>
using namespace std;

struct ktp
{
    string nama, tgl, sx, alamat, kec, desa, agama, stat, prof, wn, exp;
    int rt,rw;
};
int main()
{
    int ji;
    cout<<"Masukkan jumlah data yang akan diinput = ";
    cin>>ji;
    ktp data[ji];
    cout<<"==============Program KTP==============" << endl;
    cout<<endl<<"---Input DATA---"<<endl;
    for (int x=0; x<ji; x++)
    {
        cout<<"Nama                = ";
        cin>>data[x].nama;
        cout<<"Tanggal Lahir       = ";
        cin>>data[x].tgl;
        cout<<"Jenis Kelamin       = ";
        cin>>data[x].sx;
        cout<<"Alamat              = ";
        cin>>data[x].alamat;
        cout<<"RT                  = ";
        cin>>data[x].rt;
        cout<<"RW                  = ";
        cin>>data[x].rw;
        cout<<"Kecamatan           = ";
        cin>>data[x].kec;
        cout<<"Desa                = ";
        cin>>data[x].desa;
        cout<<"Agama               = ";
        cin>>data[x].agama;
        cout<<"Status              = "
        cin>>data[x].stat;
        cout<<"Kewarganegaraan     = ";
        cin>>data[x].wn;
        cout<<"Berlaku hingga      = ";
        cin>>data[x].exp;
        cout<<endl;
    }


    return 0;
}
