#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Masukan tinggi angka = ";
    cin>>a;
    b=0;
    while(b<=a)
    {
        c=1;
        while (c<=a)
        {
            cout<<c;
            c++;
        }
        cout<<endl;
        a--;
    }
    return 0;
}
