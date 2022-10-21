#include <iostream>
#define phi 3.14

using namespace std;

int main()
{
    int a, t;
    cout<<"\nPRORAM MENGHITUNG LUAS SEGITIGA";
    cout<<endl<<"Masukkan nilai alas = ";
    cin>>a;
    cout<<"Masukan nilai tinggi = ";
    cin>>t;
    cout << "Hasil Luas = "<<(a*t)/2<<endl;

    int s;
    cout<<"\nPRORAM MENGHITUNG LUAS KUBUS";
    cout<<endl<<"Masukkan nilai sisi = ";
    cin>>s;
    cout << "Hasil Luas = "<<s*s*s<<endl;

    float r;
    cout<<"\nPRORAM MENGHITUNG LUAS LINGKARAN";
    cout<<endl<<"Masukkan nilai jari jari = ";
    cin>>r;
    cout << "Hasil Luas = "<<phi*r*r<<endl;

    float rk, tk;
    cout<<"\nPRORAM MENGHITUNG VOLUME KERUCUT";
    cout<<endl<<"Masukkan nilai jari jari = ";
    cin>>rk;
    cout<<"Masukkan nilai tinggi = ";
    cin>>tk;
    cout << "Hasil Luas = "<<(phi*(rk*rk)*tk)/3<<endl;

    float sk;
    cout<<"\nPRORAM MENGHITUNG LUAS PERSEGI PANJANG";
    cout<<endl<<"Masukkan nilai sisi = ";
    cin>>sk;
    cout << "Hasil Luas = "<<sk*sk<<endl;

    int p,l;
    cout<<"\nPRORAM MENGHITUNG LUAS KOTAK";
    cout<<endl<<"Masukkan nilai panjang = ";
    cin>>p;
    cout<<"Masukkan nilai panjang = ";
    cin>>l;
    cout << "Hasil Luas = "<<p*l<<endl;

    return 0;
}
