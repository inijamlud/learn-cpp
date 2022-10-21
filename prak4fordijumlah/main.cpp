#include <iostream>
#include <iostream>

using namespace std;

int main()
{
    int a,b,d,e;
    cout<<"Masukkan nilai awal = ";
    cin>>a;
    cout<<"Masukkan nilai akhir = ";
    cin>>b;
    d=0;
    e=1;
    for (a;a<=b; a++)
    {

        cout <<a<< endl;
        d=d+a;
        e=e*a;
    }
    cout<<"Penjumlahan = "<<d;
    cout<<"\nPerkalian = "<<e;
    return 0;
}
