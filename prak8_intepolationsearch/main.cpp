#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int x, arrs,pos,temp, low, high,key;
    cout<<"masukkan banyak data : ";
    cin>>x;

    low = 0;
    high = x-1;
    int arr[x];
    //int arr[5]={2,7,9,12,13};

    for (int i=0; i<x; i++)
    {
        //arrs=rand() % 96;
        //arr[i]=arrs;
        cin>>arr[i];
    }


    //sorting
    for (int i=0; i<x; i++)
    {
        for (int j=0; j<(x-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for (int i=0; i<x; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\ncari angka = ";
    cin>>key;

    int a=1;

    while (key>=arr[low] && key<=arr[high] && a==1)
    {
        pos=((key-arr[low])*(high-low))/(arr[high]-arr[low])+low;

        if(key>arr[pos])
        {
            low=pos+1;
        }
        else if(key<arr[pos])
        {
            high=pos-1;
        }
        else
        {
            a=0;
        }


    }
    if(key==arr[pos]){
        cout<<"data "<<key<<" ditemukan pada index ke - "<<pos;
    }

}
