#include <iostream>

using namespace std;

int main()
{
    int nilai;
    cout << "Program Menentukan Nilai" << endl;
    cout<<"Masukkan Nilai Anda = ";cin>>nilai;
    if (nilai>80 && nilai<=100)
    {
        cout<<"Nilai Anda A";
    }
    else if (nilai>70 && nilai<=81)
    {
        cout<<"Nilai Anda B";
    }
    else if (nilai>50 && nilai<=70)
    {
        cout<<"Nilai Anda C";
    }
    else if (nilai>30 && nilai<=51)
    {
        cout<<"Nilai Anda D";
    }
    else if (nilai<=30)
    {
        cout<<"Nilai Anda E";
    }
    else{
        cout<<"Anda salah memasukan nilai";
    }
    return 0;
}
