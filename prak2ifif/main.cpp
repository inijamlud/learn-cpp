#include <iostream>

using namespace std;

int main()
{
    int plh, mk, mn;
    cout<<"\n======WARUNG HM======\n";
    cout<<"1. Makanan\n";
    cout<<"2. Minuman\n";
    cout<<"welkam, pilih menu = ";
    cin>>plh;
    if (plh==1)
    {
        cout<<"\n======Menu Makanan======\n";
        cout<<"1. Mie\n";
        cout<<"2. Bakso\n";
        cout<<"3. Sate\n";
        cout<<"welkam, pilih menu = ";
        cin>>mk;
        if (mk==1)
        {
            cout<<"Anda memesan Mie\n";
        }
        else if (mk==2)
        {
            cout<<"Anda Memesan Bakso\n";
        }
        else if (mk==3)
        {
            cout<<"Anda Memesan Sate\n";
        }
        else
        {
            cout<<"Anda Salah memasukan pesanan";
        }
    }

    else if (plh==2)
    {
        cout<<"\n======Menu Minuman======\n";
        cout<<"1. Jus Jambu\n";
        cout<<"2. Es teh\n";
        cout<<"3. Air Putih saja\n";
        cout<<"welkam, pilih menu = ";
        cin>>mn;
        if (mn==1)
        {
            cout<<"Anda memesan Jus Jambu\n";
        }
        else if (mn==2)
        {
            cout<<"Anda Memesan Es teh\n";
        }
        else if (mn==3)
        {
            cout<<"Anda Memesan Air Putih saja\n";
        }
        else
        {
            cout<<"Anda Salah memasukan pesanan";
        }
    }

    else
    {
        return 0;
    }
}
