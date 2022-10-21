#include <iostream>

using namespace std;

int main()
{
    //menghitung konversi dari detik
    /*
    int j,m,d,a,s;
     cout << "Masukkan nilai detik = " ;
     cin>>a;
     j=a/3600;
     s=a%3600;
     m=s/60;
     d=m%60;
     cout<<j<<" Jam "<<m<<" menit "<<d<<" detik ";
    return 0;
    //*/

    //mengitung konversi uang
    ///*
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u;
    cout<<"Masukan nilai uang = ";cin>>a;
    b=a/100000;
    c=a%100000;
    d=c/50000;
    e=c%50000;
    f=e/20000;
    g=e%20000;
    h=g/10000;
    i=g%10000;
    j=i/5000;
    k=i%5000;
    l=k/2000;
    m=k%2000;
    n=m/1000;
    o=m%1000;
    p=o/500;
    q=o%500;
    r=q/200;
    s=q%200;
    t=s/100;
    u=s%100;
    cout<<b<<" Lembar 100rb"<<endl;
    cout<<d<<" Lembar 50rb"<<endl;
    cout<<f<<" Lembar 20rb"<<endl;
    cout<<h<<" Lembar 10rb"<<endl;
    cout<<j<<" Lembar 5rb"<<endl;
    cout<<l<<" Lembar 2rb"<<endl;
    cout<<n<<" Lembar 1rb"<<endl;
    cout<<p<<" Koin 500"<<endl;
    cout<<r<<" Koin 200"<<endl;
    cout<<t<<" Koin 100"<<endl;
   //*/

    //for min segitiga terbalik
    /*
        int a,b,c;
        cout<<" Masukan tinggi angka = ";
        cin>>a;
        for (b=0; b<=a; a--)
        {
            for (c=1; c<=a; c++)
            {
                cout<<c;
            }
            cout<<endl;
        }
    */

    //while min segitiga terbalik
    /*
    int a,b,c,d;
    cout<<"Masukan tinggi angka = ";
    cin>>a;
    b=0;
    d=0;
    while(b<=a)
    {
        c=1;
        while(c<=a)
        {
            cout<<c;
            c++;
            d=+c;
        }

        cout<<endl;
        a--;
        cout<<d;
    }
   // */
}
