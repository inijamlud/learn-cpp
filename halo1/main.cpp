#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cout << "Masukkan tinggi segitiga = ";
    cin>>a;
    b=0;
    d=0;
    while(a>=b)
    {
        c=1;
        while(c<=a)
        {
            cout<<c;
            c++;
        }
        cout<<endl;
        d=+c;
        a--;
    }
    cout<<d;
    return 0;
}
