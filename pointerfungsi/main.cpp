#include <iostream>

using namespace std;

void tukar(int *x, int *y);
int main()
{
    int a,b;
    a=56;
    b=77;
    cout<<"Nilai A sebelum memanggil fungsi = "<<a<<endl;
    cout<<"Nilai B sebelum memanggil fungsi = "<<b<<endl;
    tukar(&a,&b);
}

void tukar(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
    cout<<"Nilai dalam fungsi = "<<*x<<endl;
    cout<<"Nilai dalam fungsi = "<<*y<<endl;
}
