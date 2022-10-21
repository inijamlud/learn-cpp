#include <iostream>
using namespace std;

int point(int *b){
    int x = *b * *b;
    cout <<"Hasil Kuadrat = "<<x<<endl;
}

int main()
{
    int a;
    cout <<"Masukan Nilai a = ";cin>>a;
    cout <<"Ini nilai  a = "<<a<<endl;
    cout <<"Ini alamat a = "<<&a<<endl;
    point(&a);
}
