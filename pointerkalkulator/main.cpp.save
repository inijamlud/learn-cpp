#include <iostream>

using namespace std;

int tambah(int *x, int *y);
void kurang(int *x, int *y);
void mod  (int *x, int *y);
void kali  (int *x, int *y);

int main()
{
    int a,b,c;
    cout<<"KALKULATOR" << endl;
    cout<<"Masukan nilai 1 = ";cin>>a;
    cout<<"Masukan nilai 2 = ";cin>>b;
    cout<<"1. Tambah \n2. Kurang \n3. Kali \n4. Modulus\n";
    cout<<"Masukan pilihan : ";cin>>c;
    switch(c){
    case 1:
        cout<<tambah(&a,&b);
        break;
    case 2:
        kurang(&a,&b);
        break;
    case 3:
        kali(&a,&b);
        break;
    case 4:
        mod(&a,&b);
        break;
  }
}

int tambah(int *x,int *y){
    //cout<<*x<<"+"<<*y<<" = "<<*x+*y;
    return *x+*y;
}

void kurang(int *x,int *y){
    cout<<*x<<"-"<<*y<<" = "<<*x-*y;
}

void kali(int *x,int *y){
    cout<<*x<<"x"<<*y<<" = "<<(*x)*(*y);
}

void mod(int *x,int *y){
    cout<<*x<<"%"<<*y<<" = "<<*x%*y;
}
