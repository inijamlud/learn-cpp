#include <iostream>

using namespace std;

int main()
{
    int y=30,x=23;
    int *px;
    px=&x;
    cout<<"Alamat x (&x)= "<<&x<<endl;
    cout<<"Isi x (x) = "<<x<<endl;
    cout<<"Isi px (px=&x) = "<<px<<endl;
    cout<<"Nilai yang ditunjuk px (*px) = "<<*px<<endl;
    cout<<"Isi y (y)= "<<y<<endl;
}
