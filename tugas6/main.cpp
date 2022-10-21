#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Masukan Banyak Array = ";
    cin>>x;

    int a[x];
    cout<<"\nARRAY A\n";
    for (int b=1; b<=x; b++)
    {
        cout<<"Masukan Data Ke "<<b<<" = ";
        cin>>a[b];
    }

    int d[x];
    cout<<"\nARRAY B \n";
    for (int b=1; b<=x; b++)
    {
        cout<<"Masukan Data Ke "<<b<<" = ";
        cin>>d[b];
    }

    cout<<"\nIsi Array A \n";
    for (int b=1; b<=x; b++)
    {
        cout<<a[b]<<", ";
    }
    cout<<"\nIsi Array B \n";
    for (int b=1; b<=x; b++)
    {
        cout<<d[b]<<", ";
    }

    cout<<"\nARRAY A + ARRAY B = \n";
    for (int b=1;b<=x;b++)
    {
     cout<<a[b] + d[b]<<", ";
    }
    return 0;
}
