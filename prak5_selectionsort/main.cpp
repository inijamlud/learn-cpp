#include <iostream>

using namespace std;

void desselsort(int k[], int);
void asselsort(int k[], int);

int main()
{
    int g,pil, temp;
    cout<<"masukin banyak data  = ";cin>>g;
    cout<<endl;
    int k[g];

    for (int i=0; i<g; i++)
    {
        cout<<"masukan data = ";
        cin>>k[i];
    }

    for (int a=0; a<g-1; a++)
    {
        int c=a;
        for (int d=a+1; d<g; d++)
        {
            if (k[c] < k[d])
            {
                c=d;
            }
        }
        temp=k[c];
        k[c]=k[a];
        k[a]=temp;
    }
    cout<<endl;
    cout<<"1. Ascending | 2. Descending | Pilihan = ";cin>>pil;
    switch(pil){
    case 1:
    cout<<"Ascending \n";
    asselsort(k,g);
    break;
    case 2:
    cout<<endl<<"Descending \n";
    desselsort(k,g);
    break;
    }
    cout<<endl;
}

void desselsort(int k[], int g)
{
    for (int i=0; i<g; i++)
    {
        cout<<k[i]<<" ";
    }
}

void asselsort(int k[], int g)
{
    for (int i=g-1; i>=0; i--)
    {
        cout<<k[i]<<" ";
    }
}
