#include <iostream>

using namespace std;

int main()
{
    int a[3][3], b[3][3],c[3][3];

    for(int p=0; p<3; p++)
    {
        for(int q=0; q<3; q++)
        {
            cout<<"Masukkan array A["<<p<<"]"<<"["<<q<<"] = ";
            cin>>a[p][q];
        }
    }

    for(int p=0; p<3; p++)
    {
        for(int q=0; q<3; q++)
        {
            cout<<"Masukkan array B["<<p<<"]"<<"["<<q<<"] = ";
            cin>>b[p][q];
        }
    }

    cout<<endl;
    //Pertambahan
    for(int p=0; p<3; p++)
    {
        for(int q=0; q<3; q++)
        {
            c[p][q]=a[p][q]+b[p][q];
            cout<<"A["<<p<<"]"<<"["<<q<<"] + B["<<p<<"]"<<"["<<q<<"] = "<<c[p][q]<<endl;
        }
    }
    return 0;
}
