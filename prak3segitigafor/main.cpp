#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Masukan tinggi segitiga = ";
    cin>>x;
    for (y=0; y<=x; y++)
    {
        for (z=1; z<=y; z++)
        {
            cout<<z;
        }
        cout<<endl;
    }
}
