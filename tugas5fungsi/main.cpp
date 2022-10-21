#include <iostream>

#define phi 3.14

using namespace std;

int kubus(int);
int tabung (int,int);
int sg3 (int,int,int);
int sg3rev (int,int,int);
void garis();

int main()
{
    int a,b,c,pil,s,r,t,x,y,z;
    menu:
    cout<<"\n==============PILIH MENU==============\n";
    cout<<"1. Volume Kubus\n";
    cout<<"2. Volume Tabung\n";
    cout<<"3. Segitiga Siku Angka\n";
    cout<<"4. Segitiga Siku Angka Terbalik\n";
    cout<<"Pilih Menu = ";
    cin>>pil;
    garis();
    switch(pil)
    {
    case 1:
        kubus (s);
        goto menu;
        break;
    case 2:
        tabung (r,t);
        goto menu;
        break;
    case 3:
        sg3(x,y,z);
        goto menu;
        break;
    case 4:
        sg3rev (a,b,c);
        goto menu;
        break;
    default:
        cout<<"   !!ANDA SALAH MEMASUKAN PILIHAN!!   \n";
        garis();
        cout<<endl;
        goto menu;
        break;
    }
}

void garis()
{
    cout<<"======================================\n";
}

int kubus (int s)
{
    cout<<"Masukan Sisi Kubus = ";
    cin>>s;
    cout<<"Sisi Kubus = s*s*s"<<endl;
    cout<<"           = "<<s<<"*"<<s<<"*"<<s;
    cout<<"\n           = "<<s*s*s<<endl;
}

int tabung (int r, int t)
{
    cout<<"Masukan Jari-jari Tabung = ";
    cin>>r;
    cout<<"Masukan Tinggi Tabung = ";
    cin>>t;
    cout<<"Volume Tabung = phi*r*r*t"<<endl;
    cout<<"              = "<<phi<<"*"<<r<<"*"<<r<<"*"<<t;
    cout<<"\n              = "<<phi*r*r*t<<endl;
}

int sg3(int x, int y, int z)
{
    cout<<"Masukan tinggi segitiga = ";
    cin>>x;
    for (y=0; y<=x; y++)
    {
        for (z=1; z<=y; z++)
        {
            cout<<z;
        }
        cout<<endl;
    }
}

int sg3rev (int a, int b, int c)
{
    cout<<"Masukan tinggi angka = ";
    cin>>a;
    b=0;
    while(b<=a)
    {
        c=1;
        while(c<=a)
        {
            cout<<c;
            c++;
        }
        cout<<endl;
        a--;
    }
}
