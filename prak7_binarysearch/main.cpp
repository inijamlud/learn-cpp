#include <iostream>
#include <stdlib.h>

using namespace std;
int searcha(int, int arr[], int );
int searchb(int, int arr[], int );
int ascending(int[],int);
int descending(int[],int);

int main()
{
    int x,f,pil;
    cout<<"masukkan banyak data : ";
    cin>>x;
    int arr[x];
    char arrs;

    for (int i=0; i<x; i++)
    {
        arrs=rand() % 96;
        arr[i]=arrs;
    }

    cout<<"1.Ascending \n2.Descending\n";
    cout<<"Pilih = ";
    cin>>pil;
    switch(pil){
    case 1:
        ascending(arr,x);
        break;

    case 2:
        descending(arr,x);
        break;
        }

    cout<<"\nCari angka berapa : ";
    cin>>f;
    if(pil==1){
    searcha(x,arr,f);}
    else if(pil=2){
    searchb(x,arr,f);}
}

int searcha(int x, int arr[], int f){
    int cen, aw=0;
    while(aw <= x){
        cen=(aw+x)/2;
        if(f<arr[cen]){
            x = cen -1;
        }
        else if ( f>arr[cen]){
            aw = cen +1;
        }
        else{
            aw = x +1;
        }
    }
    if (f==arr[cen]){
        cout<<"angka ditemukan pada index-"<<cen;
    }
    else{
        cout<<"data tidak ditemukan";
    }
}

int searchb(int x, int arr[], int f){
    int cen, aw=0;
    while(aw <= x){
        cen=(aw+x)/2;
        if(f<arr[cen]){
            aw = cen +1;
        }
        else if ( f>arr[cen]){
            x = cen -1;
        }
        else{
            aw = x +1;
        }
    }
    if (f==arr[cen]){
        cout<<"angka ditemukan pada index-"<<cen;
    }
    else{
        cout<<"data tidak ditemukan";
    }
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