#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"Program Pertambahan Matriks";
    cout<<"\nMasukan jumlah baris : ";
    cin>>x;
    cout<<"Masukan jumlah kolom : ";
    cin>>y;
    int a[x][y],b[x][y];
    cout<<"Matriks A"<<endl;
    for (int i=0; i<x; i++)
    {
        for (int j=0;j<y;j++){
         cout<<"Masukan data indeks ("<<i<<","<<j<<") : ";cin>>a[i][j];
        }
    }

    cout<<"Matriks B"<<endl;
    for (int i=0; i<x; i++)
    {
        for (int j=0;j<y;j++){
         cout<<"Masukan data indeks ("<<i<<","<<j<<") : ";cin>>b[i][j];
        }
    }

    cout<<"Matriks A"<<endl;
    for (int i=0; i<x; i++)
    {cout<<"[ ";
        for (int j=0;j<y;j++){
         cout<<a[i][j]<<" ";
        }cout<<"]"<<endl;
    }

    cout<<"Matriks B"<<endl;
    for (int i=0; i<x; i++)
    {cout<<"[ ";
        for (int j=0;j<y;j++){
         cout<<b[i][j]<<" ";
        }cout<<"]"<<endl;
    }

    cout<<"Matriks A + Matriks B"<<endl;
    for (int i=0; i<x; i++)
    {cout<<"[ ";
        for (int j=0;j<y;j++){
         cout<<b[i][j]+a[i][j]<<" ";
        }cout<<"]"<<endl;
    }
    return 0;
}
