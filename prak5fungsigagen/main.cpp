#include <iostream>

using namespace std;

int ganjil(int,int,int);
int genap(int,int,int);
int total (int);
void garis();

int main()
{
    int a,b,pil;
    cout<<"Masukan Nilai Awal = ";
    cin>>a;
    cout<<"Masukan Nilai Akhir = ";
    cin>>b;
    garis();
    cout<<"Masukan Pilihan = \n1. Genap \n2. Ganjil";
    cout<<"\nMasukan Pilihan = ";
    cin>>pil;
    switch(pil)
    {
    case 1:
        genap(a,b,0);
        break;
    case 2:
        ganjil(a,b,0);
        break;
    }
}

int genap (int a, int b, int d)
{
    for(a; a<=b; a++)
    {
        if(a%2==0)
        {
            cout<<a<<" - ";
            d=d+a;
        }
    }
    cout<<"Jumlah = "<<d;
}

int ganjil (int a, int b, int d)
{
    for(a; a<=b; a++)
    {
        if(a%2==1)
        {
            cout<<a<<" - ";
            d=d+a;
        }
    }
    cout<<"Jumlah = "<<d<<endl;
}


void garis()
{
    cout<<"========================\n";
}
