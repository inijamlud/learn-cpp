#include <iostream>

using namespace std;
int tambah(int,int);
int kurang(int,int);
int mod(int,int);
int bagi(float,float);
int kali(int,int);
void garis();

int main()
{
    int a,b,pil;
    cout<<"\nMasukan a = ";
    cin>>a;
    cout<<"Masukan b = ";
    cin>>b;
    garis();
    cout<<"Pilihan Operator = \n1. Tambah\n2. Kurang \n3. Kali \n4. Bagi \n5. Mod \nMasukan Pilihan = ";
    cin>>pil;
    garis();
    switch (pil)
    {
    case 1:
        tambah(a,b);
        garis();
        main();
        break;
    case 2:
        kurang(a,b);
        garis();
        main();
        break;
    case 3:
        kali(a,b);
        garis();
        main();
        break;
    case 4:
        bagi(a,b);
        garis();
        main();
        break;
    case 5:
        mod(a,b);
        garis();
        main();
        break;
    }
}

void garis()
{
    cout<<"=========================\n";
}

int tambah(int a,int b)
{
    cout<<"Hasil Tambah = "<<a+b<<endl;
}

int kurang(int a,int b)
{
    cout<<"Hasil kurang = "<<a-b<<endl;
}

int kali(int a,int b)
{
    cout<<"Hasil kali = "<<a*b<<endl;
}

int bagi(float a,float b)
{
    cout<<"Hasil bagi = "<<a/b<<endl;
}

int mod(int a,int b)
{
    cout<<"Hasil Modulus = "<<a%b<<endl;
}
