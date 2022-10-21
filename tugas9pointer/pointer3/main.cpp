#include <iostream>

using namespace std;

int main()
{
    int sar[5];
    for(int a=0;a<5;a++){
        int *i = &sar[a];
        cout << "Alamat array index ke-"<<a<<" = "<<i<<endl;
    }
    return 0;
}
