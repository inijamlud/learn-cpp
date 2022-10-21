#include <iostream>

using namespace std;

void insellasc(int a[],int );
void inselldesc(int a[],int );
int main()
{
    int a[100],h, pilih;
    int c[10]= {0,0,0,0,0,0,0,0,0,0};

    cout<<"Insertion Sort"<<endl;
    cout<<"masukkan jumlah data = ";
    cin>>h;

    for(int i=0; i<h; i++)
    {
        cout<<"Masukkan data = " ;
        cin>>a[i];
    }

    cout<<"Pilih menu "<<endl;
    cout<<"1. Ascending \n";
    cout<<"2. Descending \n";
    cout<<"Pilih = ";cin>>pilih;
    switch(pilih){
    case 1:
        insellasc(a,h);
        break;
    case 2:
        inselldesc(a,h);
        break;
    }

    for(int j=0; j<h; j++)
    {
        cout<<" "<<a[j];
    }
    cout<<endl;

    for(int j=0;j<10;j++){
        if(a[j]==1)
        {
            c[0]+=1;
        }
        else if(a[j]==2)
        {
            c[1]+=1;
        }
        else if(a[j]==3)
        {
            c[2]+=1;
        }
        else if(a[j]==4)
        {
            c[3]+=1;
        }
        else if(a[j]==5)
        {
            c[4]+=1;
        }
        else if(a[j]==6)
        {
            c[5]+=1;
        }
        else if(a[j]==7)
        {
            c[6]+=1;
        }
        else if(a[j]==8)
        {
            c[7]+=1;
        }
        else if(a[j]==9)
        {
            c[8]+=1;
        }
        else if(a[j]==10)
        {
            c[9]+=1;
        }
        else if(a[j]==11)
        {
            c[10]+=1;
        }
    }

    for(int j=0; j<11; j++)
    {
        cout<<"\nBanyak angka "<<j+1<<" = "<<c[j];
    }
}

void insellasc(int a[], int h)
{
    for(int i=0; i<h; i++)
    {
        int j=i;
        while(j>0 && a[j]<a[j-1])
        {
            int temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
}

void inselldesc(int a[], int h)
{
    for(int i=0; i<h; i++)
    {
        int j=i;
        while(j>0 && a[j]>a[j-1])
        {
            int temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
}
