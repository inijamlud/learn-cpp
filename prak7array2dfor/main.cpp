#include <iostream>

using namespace std;

int main()
{
    int i,j;
    cout<<"Masukan baris array = ";
    cin>>i;
    cout<<"Masukan kolom array = ";
    cin>>j;
    int a[i][j];
    for (int x=0; x<i; x++)
    {
        for (int y=0; y<j; y++)
        {
            cout<<"Masukkan indeks "<<x<<","<<y<<" = ";
            cin>>a[x][y];
        }
    }

    for (int x=0; x<i; x++)
    {
        cout<<"[ ";
        for (int y=0; y<j; y++)
        {
            cout<<a[x][y]<<" ";
        }
        cout<<"]"<<endl;
    }
    return 0;
}
