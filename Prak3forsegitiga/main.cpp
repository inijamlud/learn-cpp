#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"\nMasukkan Nilai Awal = ";
    cin>>c;
    for (a=0; a<=c; a++)
    {
        for (b=1; b<=a; b++)
        {
            cout<<b;
        }
        cout<<endl;
    }
}
