#include <iostream>
#include <string.h>

using namespace std;
void asc(char k[][50],int);
void desc(char k[][50],int);

int main()
{
    int f,fd;
    cout<<"Selection Sort Char" << endl;
    cout<<"Masukan Banyak data = ";cin>>f;
    char k[f][50], temp[40];

    for (int i=0; i<f; i++)
    {
        cout<<"Masukan nama ke-"<<i<<" = ";
        cin>>k[i];
    }

    for (int a=0; a<f; a++)
    {
        int c=a;
        for (int d=a; d<f; d++)
        {
            if (strcmp(k[c], k[d])>0)
            {
                c=d;
            }
        }
        strcpy(temp,k[c]);
        strcpy(k[c],k[a]);
        strcpy(k[a],temp);
    }

    cout<<endl<<"Pilihan\n1. Ascending\n2. Descending \nPilih=";cin>>fd;
    switch(fd){
    case 1:
    cout<<endl<<"Data Setelah Diurutkan\n";
    cout<<"======================\n";
    asc(k,f);
    break;

    case 2:
    cout<<endl<<"Data Setelah Diurutkan\n";
    cout<<"======================\n";
    desc(k,f);
     break;
    }
}

void asc(char k[][50],int f){
for (int i=0; i<f; i++)
    {
        cout<<k[i]<<endl;
    }}

void desc(char k[][50],int f){
for (int i=f-1; i>=0; i--)
    {
        cout<<k[i]<<endl;
    }}
