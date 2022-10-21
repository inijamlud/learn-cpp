#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    int x, arrs,pos, low, high;
    cout<<"masukkan banyak data : ";
    cin>>x;

    low = 0;
    high = x-1;
    char arr[x][50],temp[50],key[50];
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
        int c=i;
        for (int d=i; d<x; d++)
        {
            if (strcmp(arr[c], arr[d])>0)
            {
                c=d;
            }
        }
        strcpy(temp,arr[c]);
        strcpy(arr[c],arr[i]);
        strcpy(arr[i],temp);
    }

    for (int i=0; i<x; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\ncari kata = ";
    cin>>key;

    int a=1;

    while (strcmp (key, arr[low])>0 && a==1)
    {
        int r = strcmp(key,arr[low]);
        int s = strcmp(arr[high],arr[low]);

        pos=(r * (high-low)/s+low);

        if(strcmp(key,arr[pos])>0)
        {
            low=pos+1;
        }
        else if(strcmp(key,arr[pos])<0)
        {
            high=pos-1;
        }
        else
        {
           a++;
        }

    }
    if(strcmp(key,arr[pos])==0){
        cout<<"data "<<key<<" ditemukan pada index ke - "<<pos;
    }

}
