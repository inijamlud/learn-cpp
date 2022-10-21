#include <iostream>

using namespace std;

int main()
{
    int a;
    int *b;
    a=200;
    b=&a;
    cout << "Alamat a = " << &a<<endl;
    cout << "Nilai  a = " << a<<endl;
    cout << "Alamat b = " << &b<<endl;
    cout << "Nilai  b = " << *b<<endl;
    return 0;
}
