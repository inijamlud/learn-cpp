#include <iostream>
//include syntaks standar

using namespace std;

int main()
{
    int a,b,c,d,x;
    cout<<"Masukan batas awal = ";
    cin>>a;
    cout<<"Masukan batas akhir = ";
    cin>>b;
pil:
    cout<<"1. Cetak Ganjil\n2. Cetak Genap \nPilih = ";
    cin>>x;
    c=0;
    d=1;

    switch (x)
    {
    case 1:
        while(a<=b)
        {
            if (a%2==1)
            {
                cout<<a<<endl;
                c+=a;
                d*=a;
            }
            a++;
        }
        break;

    case 2:
        while(a<=b)
        {
            if (a%2==0)
            {
                cout<<a<<endl;
                c+=a;
                d*=a;
            }
            a++;
        }
        break;
    default:
        cout<<"salah pilih!\n";
        goto pil;
    }

    cout<<"Total = "<<c;
    cout<<"\nPerkalian = "<<d;
    /*    int a=1;                  //syntaks standar
           while(a<=10)
           {
               cout<<a<<endl;
               a++;
           }
    */
    return 0;
}
