#include <iostream>

using namespace std;

int main()
{
    int byr, disc, ttl;
    cout<<"Program Diskon Pembayaran"<<endl;
    cout<<"=========================";
    cout<<"\nUang yang dibayarkan = ";
    cin>>byr;
    if (byr>50000)
    {
        disc=byr*0.5;
        ttl=byr-disc;
        cout<<"Anda Mendapat diskon 50% Sebesar = "<<disc;
        cout<<"\nTotal Pembayaran = "<<ttl<<endl;
    }
    else if (byr<=50000 && byr>=10000)
    {
        disc=byr*0.1;
        ttl=byr-disc;
        cout<<"Anda Mendapat diskon 10% Sebesar = "<<disc;
        cout<<"\nTotal Pembayaran = "<<ttl<<endl;
    }
    else if (byr<10000)
    {
               ttl=byr-disc;
        cout<<"Anda Tidak Mendapat diskon";
        cout<<"\nTotal Pembayaran = "<<ttl<<endl;
    }
    return 0;
}
