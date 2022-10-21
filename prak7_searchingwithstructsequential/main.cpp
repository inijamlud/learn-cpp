#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

struct mhs
{
    char x[10],no[10],nim[10],nama[10],semester[10],prodi[10];
} data[10];

int main()
{
    int jml,i,katamu,s;
q:
    cout<<"masukan jumlah data : ";
    cin>>jml;

    cout<<"====================\n";
    cout<<"Input data mahasiswa\n";
    cout<<"====================\n";
    for (i=0; i<jml; i++)
    {
        cout<<"Masukan no          : ";
        cin>>data[i].no;
        cout<<"Masukan nim         : ";
        cin>>data[i].nim;
        cout<<"Masukan Nama        : ";
        cin>>data[i].nama;
        cout<<"Masukan semester    : ";
        cin>>data[i].semester;
        cout<<"Masukan prodi       : ";
        cin>>data[i].prodi;
        cout<<endl;
    }

    cout<<"====================\n";
    cout<<"1. Cari\n2. Input \n3. Exit"<<endl;
    cout<<"Masukan pilihan : ";
    cin>>s;
    switch(s){
    case 1:
        cout<<"1. Berdasarkan Nim"<<endl;
        cout<<"2. Berdasarkan Nama"<<endl;
        cout<<"3. Berdasarkan Semester"<<endl;
        cout<<"4. Berdasarkan Prodi"<<endl;
        cout<<"Masukan pilihan : ";
        cin>>s;
        cout<<"====================\n";
        switch(s){
        case 1:
            cout<<"Cari berdasarkan NIM"<<endl;
            cout<<"Masukan NIM = ";
            cin>>data[10].x;
            katamu=0;
            i=0;
            while(i<jml)
            {
                if(strcmp(data[i].nim,data[10].x)==0)
                {
                    cout<<"Data dengan NIM = "<<data[10].x<<endl;
                    cout<<"no           : "<<data[i].no<<endl;
                    cout<<"nim          : "<<data[i].nim<<endl;
                    cout<<"nama         : "<<data[i].nama<<endl;
                    cout<<"semester     : "<<data[i].semester<<endl;
                    cout<<"prodi        : "<<data[i].prodi<<endl;
                    cout<<endl;
                    katamu=1;
                    i++;
                }
                else
                    i++;
            }
            if(katamu!=1)
            {
                cout<<"data tidak ditemukan";
            }
            break;
        case 2:
            cout<<"Cari berdasarkan NAMA"<<endl;
            cout<<"Masukan Nama = ";
            cin>>data[10].x;
            katamu=0;
            i=0;
            while(i<jml)
            {
                if(strcmp(data[i].nama,data[10].x)==0)
                {
                    cout<<"Data dengan nama = "<<data[10].x<<endl;
                    cout<<"no           : "<<data[i].no<<endl;
                    cout<<"nim          : "<<data[i].nim<<endl;
                    cout<<"nama         : "<<data[i].nama<<endl;
                    cout<<"semester     : "<<data[i].semester<<endl;
                    cout<<"prodi        : "<<data[i].prodi<<endl;
                    cout<<endl;
                    katamu=1;
                    i++;
                }
                else
                    i++;
            }
            if(katamu!=1)
            {
                cout<<"data tidak ditemukan";
            }
            break;
        case 3:
            cout<<"Cari berdasarkan SEMESTER"<<endl;
            cout<<"masukan semester = ";
            cin>>data[10].x;
            katamu=0;
            i=0;
            while(i<jml)
            {
                if(strcmp(data[i].semester,data[10].x)==0)
                {
                    cout<<"Data dengan Semester = "<<data[10].x<<endl;
                    cout<<"no           : "<<data[i].no<<endl;
                    cout<<"nim          : "<<data[i].nim<<endl;
                    cout<<"nama         : "<<data[i].nama<<endl;
                    cout<<"semester     : "<<data[i].semester<<endl;
                    cout<<"prodi        : "<<data[i].prodi<<endl;
                    cout<<endl;
                    katamu=1;
                    i++;
                }
                else
                    i++;
            }
            if(katamu!=1)
            {
                cout<<"data tidak ditemukan";
            }
            break;
        case 4:
            cout<<"Cari berdasarkan PRODI"<<endl;
            cout<<"Masukan Prodi = ";
            cin>>data[10].x;
            katamu=0;
            i=0;
            while(i<jml)
            {
                if(strcmp(data[i].prodi,data[10].x)==0)
                {
                    cout<<"Data dengan PRODI = "<<data[10].x<<endl;
                    cout<<"no           : "<<data[i].no<<endl;
                    cout<<"nim          : "<<data[i].nim<<endl;
                    cout<<"nama         : "<<data[i].nama<<endl;
                    cout<<"semester     : "<<data[i].semester<<endl;
                    cout<<"prodi        : "<<data[i].prodi<<endl;
                    cout<<endl;
                    katamu=1;
                    i++;
                }
                else
                    i++;
            }
            if(katamu!=1)
            {
                cout<<"data tidak ditemukan";
            }
            break;
        }
        break;
    case 2:
        goto q;
        system("cls");
        break;
    case 3:
        cout<<"Kapunkap!";
        break;
    }}
