#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char pil;
    cout<<"KALKULATOR SEDERHANA";
    cout<<"\n====================";
u:
    cout<<endl<<"Masukan Nilai ke-1 = ";
    cin>>a;
    cout<<"Masukan Nilai ke-2 = ";
    cin>>b;
    cout<<"------------------------";
m1:
    cout<<"\nPilih Operator +,-,/,* = ";
    cin>>pil;
    switch(pil)
    {
    case '+':
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
        goto u;
        break;
    case '-':
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
        goto u;
        break;
    case '/':
        cout<<a<<"/"<<b<<"="<<a/b<<endl;
        goto u;
        break;
    case '*':
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
        goto u;
        break;
    default:
        cout<<"\nAnda salah memasukan pilihan\n";
        goto m1;
        break;
    }
    return 0;
}
