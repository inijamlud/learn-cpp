#include <iostream>

using namespace std;

int main()
{
    int a;
    int *b;
    b=&a;
    cout << "Program Konversi Nilai ke Predikat"<<endl;
    cout << "Masukan Nilai Anda = ";cin>>a;
    if (*b<=100 && *b>81 ){
        cout<<"Nilai Anda A\n";
        cout<<"Nilai Anda Sangat Baik!";
    }
    else if (*b<=80 && *b>=50){
        cout<<"Nilai Anda B\n";
        cout<<"Nilai Anda Cukup!";
    }
    else if (*b<=49 && *b>=0){
        cout<<"Nilai Anda C\n";
        cout<<"Nilai Anda Kurang!";
}    else {
        cout<<"Anda Salah Memasukan Nilai!";
    }
    return 0;
}
