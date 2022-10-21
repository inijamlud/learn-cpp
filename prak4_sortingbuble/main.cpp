#include <iostream>
using namespace std;

int ascending(int[],int);
int descending(int[],int);

int main()
{
    int pil,g;
    cout<<"Masukan Banyak data yang akan diinput = ";cin>>g;
    int a[g];
    for (int i=0; i<g; i++)
    {
        cout<<"Masukkan angka ke-"<<i<<" = ";
        cin>>a[i];
    }

    cout<<endl;
    cout<<"Menu Pilihan"<<endl;
    cout<<"1.Ascending \n2.Descending\n";
    cout<<"Pilih = ";
    cin>>pil;


    cout<<"\nData Sebelum diurut ";
    for (int i=0; i<g; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"===================\n";

    cout<<"Data Sesudah diurut ";
    switch(pil)
    {
    case 1:
        ascending(a,g);
        cout<<endl;
        break;

    case 2:
        descending(a,g);
        cout<<endl;
        break;
    }return 0;
}

int ascending(int a[],int g){
    int temp;
    for (int i=0; i<g; i++)
            {
                for (int j=0; j<(g-1); j++)
                {
                    if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            }

        for (int i=0; i<g; i++)
        {
            cout<<a[i]<<" ";
        }
}

int descending(int a[],int g){
    int temp;
    for (int i=0; i<g; i++)
            {
                for (int j=0; j<(g-1); j++)
                {
                    if(a[j]<a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            }

        for (int i=0; i<g; i++)
        {
            cout<<a[i]<<" ";
        }
}
