#include <iostream>
#include <windows.h>
#define MAX_STACK 5

using namespace std;

struct tumpukan{
    int top, ab[5];
    char a[5][20];

}z;

void pushchar(char d[5]);
void pushint(int);
void pop();
void awal();
int isfull();
int isempty();

int main()
{
    char data[5];
    int datab, pilih, pilihm;
z:  cout<<endl;cout<<endl;
    cout<<"STACK";cout<<endl;
    cout<<"1. CHAR";cout<<endl;
    cout<<"2. INT";cout<<endl;
    cout<<"3. EXIT";cout<<endl;
    cout<<"Pilih = ";cin>>pilihm;
    system("cls");awal();
    switch(pilihm){
    case 1:
        do
        {
w:          cout<<endl;cout<<endl;
            cout<<"STACK CHAR";cout<<endl;
            cout<<"1. PUSH";cout<<endl;
            cout<<"2. POP";cout<<endl;
            cout<<"3. BACK";cout<<endl;
            cout<<"4. EXIT";cout<<endl;
            cout<<endl;
            if (!isempty()){
                for(int i=z.top;i>=0;i--){
                    cout<<"["<<z.a[i]<<"]"<<endl;
                }
            }
            else{
                cout<<"[Stack Kosong]"<<endl;
            }
            cout<<"\nMasukkan pilihan = ";cin>>pilih;
            switch(pilih){
            case 1:
                if(!isfull()){
                    cout<<"Masukkan angka = ";cin>>data;
                    pushchar(data);
                    system("cls");
                    }
                else{
                    system("cls");
                    cout<<"[Tumpukan sudah penuh]";}
                break;
            case 2:
                system("cls");
                pop();
                break;
            case 3:
                system("cls");
                goto z;
                break;
            case 4:
                exit(0);
                break;
            default:
                system("cls");
                    cout<<"[ERROR]";
                goto w;
                break;
            }
            }while(pilih!=4);
            break;
        case 2:
            do
            {
 x:         cout<<endl;cout<<endl;
            cout<<"STACK INT";cout<<endl;
            cout<<"1. PUSH";cout<<endl;
            cout<<"2. POP";cout<<endl;
            cout<<"3. BACK";cout<<endl;
            cout<<"4. EXIT";cout<<endl;
            cout<<endl;
            if (!isempty()){
                for(int i=z.top;i>=0;i--){
                    cout<<"["<<z.ab[i]<<"]"<<endl;
                }
            }
            else{
                cout<<"[Stack Kosong]"<<endl;
            }
            cout<<"\nMasukkan pilihan = ";cin>>pilih;
            switch(pilih){
            case 1:
                if(!isfull()){
                    cout<<"Masukkan angka = ";cin>>datab;
                    pushint(datab);
                    system("cls");
                    }
                else{
                    system("cls");
                    cout<<"[Tumpukan sudah penuh]";}
                break;
            case 2:
                system("cls");
                    pop();
                break;
            case 3:
                system("cls");
                goto z;
                break;
            case 4:
                exit(0);
                break;
            default:
                system("cls");
                cout<<"[ERROR]";
                goto x;
                break;
            }
            }while(pilih!=4);
            break;
}}

void pushchar(char d[5]){
    if (!isfull()){
        z.top++;
        strcpy(z.a[z.top],d);
    }
    else{
        cout<<"[Stack sudah Penuh]";}}

void pushint(int l){
    if (!isfull()){
        z.top = z.top +1;
        z.ab[z.top]= l;
        system("cls");
    }
    else{
        cout<<"[Stack sudah Penuh]";}}

void pop(){
    if(!isempty()){
            system("cls");
        z.top--;
        cout<<"[Data ke-"<<z.top+1<<" diambil]";
    }
    else{
        system("cls");
        cout<<"[Tidak bisa melakukan pop]";}}

void awal(){
    z.top=-1;}

int isfull(){
    if (z.top == MAX_STACK-1)
        return 1;
    else
        return 0;}

int isempty(){
    if (z.top == -1)
        return 1;
    else
        return 0;}
