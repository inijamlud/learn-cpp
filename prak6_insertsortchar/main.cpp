#include <iostream>
#include <string.h>

using namespace std;

void insellasc(char a[],int );
void inselldesc(char a[],int);
int main()
{
    /*char a[100];
    int h, pilih, j, c=0, e=0, x[5]={0,0,0,0,0}, y[21]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char voc[5]={'a','i','u','e','o'}, kon[21]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};

    cout<<"Insertion Sort"<<endl;
    cout<<"Masukkan kata = " ;
    cin>>a;
    h=strlen(a);

    cout<<"--------------------\n";
    cout<<"Pilih menu "<<endl;
    cout<<"1. Ascending 2. Descending | Pilih = ";
    cin>>pilih;
    cout<<"--------------------\n";
    switch(pilih)
    {
    case 1:
        insellasc(a,h);
        break;
    case 2:
        inselldesc(a,h);
        break;
    }

    for( j=0; j<h; j++)
    {
        cout<<a[j]<<" ";
    }

    cout<<endl;
    cout<<"--------------------\n";
    cout<<"Vokal    : ";
    for( j=0; j<h; j++)
    {
        if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='u'||a[j]=='o')
        {
            c++;
            cout<<a[j]<<" - ";
            if(a[j]=='a'){
                x[0]++;}
            else if(a[j]=='i'){
                x[1]++;}
            else if(a[j]=='u'){
                x[2]++;}
            else if(a[j]=='e'){
                x[3]++;}
            else if(a[j]=='o'){
                x[4]++;}
        }
    }

    cout<<endl;
    cout<<"Konsonan : ";
    for( j=0; j<h; j++)
    {
        if(a[j]!='a'&&a[j]!='e'&&a[j]!='i'&&a[j]!='u'&&a[j]!='o')
        {
            e++;
            cout<<a[j]<<" - ";
            if(a[j]=='b'){
                y[0]++;}
            else if(a[j]=='c'){
                y[1]++;}
            else if(a[j]=='d'){
                y[2]++;}
            else if(a[j]=='f'){
                y[3]++;}
            else if(a[j]=='g'){
                y[4]++;}
            else if(a[j]=='h'){
                y[5]++;}
            else if(a[j]=='j'){
                y[6]++;}
            else if(a[j]=='k'){
                y[7]++;}
            else if(a[j]=='l'){
                y[8]++;}
            else if(a[j]=='m'){
                y[9]++;}
            else if(a[j]=='n'){
                y[10]++;}
            else if(a[j]=='p'){
                y[11]++;}
            else if(a[j]=='q'){
                y[12]++;}
            else if(a[j]=='r'){
                y[13]++;}
            else if(a[j]=='s'){
                y[14]++;}
            else if(a[j]=='t'){
                y[15]++;}
            else if(a[j]=='v'){
                y[16]++;}
            else if(a[j]=='w'){
                y[17]++;}
            else if(a[j]=='x'){
                y[18]++;}
            else if(a[j]=='y'){
                y[19]++;}
            else if(a[j]=='z'){
                y[20]++;}

        }
    }

    cout<<endl;
    cout<<"--------------------\n";
    cout<<"Jumlah Vokal    = "<<c<<endl;
    for(j=0; j<5; j++)
    {
        if(x[j]!=0)
        {
            cout<<"Huruf  "<<voc[j]<<" = "<<x[j]<<endl;
        }
    }

    cout<<"--------------------\n";
    cout<<"Jumlah Konsonan = "<<e<<endl;
    for(j=0; j<21; j++)
    {
        if(y[j]!=0)
        {
            cout<<"Huruf  "<<kon[j]<<" = "<<y[j]<<endl;
        }
    }

    cout<<"--------------------";*/

    for(char i='A';i<'z';i++){
        cout<<i;
    }

}


void insellasc(char a[], int h)
{
    for(int i=0; i<h; i++)
    {
        int j=i;
        while(j>0 && a[j]<a[j-1])
        {
            char temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
}

void inselldesc(char a[], int h)
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
