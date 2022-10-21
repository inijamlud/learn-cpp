#include <iostream>

using namespace std;

int in_matA(int a[10][10],int);
int in_matB(int b[10][10],int);
int cetak_matA(int a[10][10],int);
int cetak_matB(int b[10][10],int);
int jumlah_matAB(int a[10][10], int b[10][10], int);
int kurang_matAB(int a[10][10], int b[10][10], int);

int main()
{
    int kb,pil;
    cout<<"Masukan jumlah kolom dan baris = ";
    cin>>kb;
    int y[10][10];
    int z[10][10];
    in_matA(y,kb);
    in_matB(z,kb);
    a:cout<<"---------------------\n";
    cout<<"1. Penjumlahan\n";
    cout<<"2. Pengurangan\nPilihan = ";cin>>pil;
    switch(pil){
    case 1:
        cetak_matA(y,kb);cetak_matB(z,kb);
        jumlah_matAB(y,z,kb);
        goto a;
        break;
    case 2:
        cetak_matA(y,kb);cetak_matB(z,kb);
        kurang_matAB(y,z,kb);
        goto a;
        break;
    default:
        cout<<"Salah pilihan coy\n";
        goto a;
        break;
    }
}

int in_matA(int a[10][10],int x)
{
    cout<<"Input matriks A\n";
    for (int i=0; i<x; i++)
    {
        for (int j=0; j<x; j++)
        {
        cout<<"Masukkan data index ke "<<i<<","<<j<<" = ";
        cin>>a[i][j];
        }
    }
}

int in_matB(int b[10][10],int x)
{
    cout<<"Input matriks B\n";
    for (int i=0; i<x; i++)
    {
        for (int j=0; j<x; j++)
        {
            cout<<"Masukkan data index ke "<<i<<","<<j<<" = ";
            cin>>b[i][j];
        }
    }
}

int cetak_matA(int a[10][10],int x)
{
    cout<<"Matriks A\n";
    for (int i=0; i<x; i++)
    {
        cout<<"[ ";
        for (int j=0; j<x; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
}

int cetak_matB(int b[10][10],int x)
{
    cout<<"Matriks B\n";
    for (int i=0; i<x; i++)
    {
        cout<<"[ ";
        for (int j=0; j<x; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
}

int jumlah_matAB(int a[10][10], int b[10][10], int x)
{
    cout<<"Matriks A + Matriks B\n";
    for (int i=0; i<x; i++)
    {
        int d=0,c;
        cout<<"[ ";
        for (int j=0; j<x; j++)
        {
            c=a[i][j]+b[i][j];
            cout<<c<<" ";
            d=d+c;
        }
        cout<<"] --> "<<d<<endl;
    }
}

int kurang_matAB(int a[10][10], int b[10][10], int x)
{
    cout<<"Matriks A - Matriks B\n";
    for (int i=0; i<x; i++)
    {
        int d=0,c;
        cout<<"[ ";
        for (int j=0; j<x; j++)
        {
            c=a[i][j]-b[i][j];
            cout<<a[i][j]-b[i][j]<<" ";
            d-=c;
        }
        cout<<"] --> "<<d<<endl;
    }
}
