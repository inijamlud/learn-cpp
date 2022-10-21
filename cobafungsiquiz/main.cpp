#include <iostream>
using namespace std;
int hewan(string);
int buah(string);
int main()
{
    string jaw;
    int x;
    cout << "Masukan pilihan = ";
    cin>>x;
    switch(x)
    {
    case 1 :
        cout<<"Hewan ";
        cin>>jaw;
        hewan(jaw);
        break;
    case 2 :
        cout<<"Buah = ";
        cin>>jaw;
        buah(jaw);
        break;
    }

    return 0;
}

int hewan(string x)
{
    if (x=="Beruang")
    {
        cout<<"Benar";
    }
    else
    {
        cout<<"salah";
    }
}

int buah(string x)
{
    if (x=="Apel")
    {
        cout<<"Benar";
    }
    else
    {
        cout<<"salah";
    }
}
