#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"masukkan jumlah nama yang akan diinput = ";
    cin>>x;
    char nama[x][20],alamat[x][30],email[x][30],hp[x][30];
    for (int i=0; i<x; i++)
    {
        cout<<"Masukkan Nama     = ";
        cin>>nama[i];
        cout<<"Masukkan Alamat   = ";
        cin>>alamat[i];
        cout<<"Masukkan Email    = ";
        cin>>email[i];
        cout<<"Masukkan Nomor HP = ";
        cin>>hp[i];
    }

    for (int i=0; i<x; i++)
    {
        cout<<"Nama    = "<<nama[i]<<endl;
        cout<<"Alamat  = "<<alamat[i]<<endl;
        cout<<"Email   = "<<email[i]<<endl;
        cout<<"HP      = "<<hp[i]<<endl;
    }
    return 0;
}
