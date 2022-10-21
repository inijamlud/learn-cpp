#include <iostream>
#include <windows.h>
#define max 10
using namespace std;
struct queue
{
    int head;
    int tail;
    char data[max][30];
} ant;
int isfull();
int isempty();
int enqueuechar(char data[max]);
int dequeuechar();
void inisialisasi();
int main()
{
    int pilih;
    inisialisasi();
    char data[max];
    do
    {
        cout<<"ANTRIAN";
        cout<<"\n1. Masuk antrian";
        cout<<"\n2. Layani antrian";
        cout<<"\n3. Clear antrian";
        cout<<"\n4. Exit\n\n";
        if (!isempty())
        {
            for(int i=ant.head; i<=ant.tail; i++)
            {
                cout<<ant.data[i]<<" <= ";
            }
        }
        cout<<"\n\nPilihan = ";
        cin>>pilih;
        switch(pilih)
        {
        case 1:
            cout<<"masukkan data = ";
            cin>>data;
            system("cls");
            enqueuechar(data);
            break;
        case 2:
            system("cls");
            dequeuechar();
            break;
        case 3:
            inisialisasi();
            system("cls");
            cout<<"[Antrian dibersihkan]\n";
            break;
        case 4:
            exit(1);
            break;
        default:
            system("cls");
            main();
            break;
        }
    }
    while(pilih!=4);
}
void inisialisasi()
{
    ant.head = ant.tail= -1;
}
int isempty()
{
    if(ant.head==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull()
{
    if (ant.tail==max-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int enqueuechar(char data[max]){
    if (!isfull())
    {
        ant.head=0;
        ant.tail=ant.tail+1;
        strcpy(ant.data[ant.tail],data);
    }
    else
    {
        cout<<"[Antrian Penuh]\n";
    }
    return 1;
}
int dequeuechar()
{
    if (!isempty())
    {
       for(int i=ant.head;i<=ant.tail;i++){
        strcpy(ant.data[i],ant.data[i+1]);
    }
    ant.tail--;
    }
    else if(isempty())
    {
        cout<<"[Antrian Kosong]\n";
    }
}
