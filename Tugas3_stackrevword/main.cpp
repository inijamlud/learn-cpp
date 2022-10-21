#include <iostream>
//#include <string.h>
#include <windows.h>
#define max 100

using namespace std;

struct tumpukan
{
    int top;
    char a[max];
} z;

char push(char);
char pop();
int isfull();
int isempty();

int main()
{
    char kalimat[max];
    z.top=0;
    cout<<"STACK MEMBALIKAN KATA";cout<<endl;
    cout<<"Masukan Kata atau kalimat = ";cin>>kalimat;

    for(int i=0;i<strlen(kalimat);i++){
        push(kalimat[i]);
    }

    cout<<"Setelah Dibalik = ";
      for(int i=0;i<strlen(kalimat);i++){
        cout<<""<<pop();
    }
    cout<<endl;
}
char push(char d)
{
    if (!isfull())
    {
        z.top = z.top +1;
        z.a[z.top] = d;
    }
    else
    {
        cout<<"[KATA MELEBIHI BATAS MAKS KARAKTER]";
    }
}

char pop()
{
    char hasil;
    if(!isempty())
    {
        hasil=z.a[z.top];
        z.top=z.top-1;
    }
    else
    {
        cout<<"[MELEBIHI BATAS MAKS KARAKTER]";
    }
    return hasil;
}

int isfull()
{
    if (z.top == max)
        return 1;
    else
        return 0;
}

int isempty()
{
    if (z.top == 0)
        return 1;
    else
        return 0;
}
