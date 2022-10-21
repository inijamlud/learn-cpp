#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int menu(char[]);

int main()
{
    char H[100];
    int b,c;
    cout<<"masukkan huruf = ";
    cin>>H;
    menu(H);
    return 0;
    }

int menu(char H[]){
    int b=strlen(H),c;
    cout<<"pilih ";cin>>c;
    switch(c)
    {
    case 1://konsonan
        for(int i=0; i<b; i++)
        {
            if (H[i]!= 'a' && H[i]!='e' && H[i]!='i' && H[i]!='u' && H[i]!='o')
            {
                cout<<H[i];
            }
        }
        break;
    case 2://vokal
         for(int i=0; i<b; i++)
        {
            if (H[i]== 'a' || H[i]=='e' || H[i]=='i' || H[i]=='u' || H[i]=='o')
            {
                cout<<H[i];
            }
        }
        break;}}
