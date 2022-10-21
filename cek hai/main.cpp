#include <iostream>

using namespace std;

int inp_A (int a[2][2]);
int inp_B (int b[2][2]);
int out_A (int a[2][2]);
int out_B (int b[2][2]);
int tambah (int a[2][2], int b[2][2], int c[2][2]);


int main()
{
    int a[2][2];
    int b[2][2];
    int c[2][2];
    inp_A(a);
    inp_B(b);
    out_A(a);
    out_B(b);
    tambah(a,b,c);

}

int inp_A(int a[2][2]){
    for(int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            cout<<"Masukan Data A["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }
}

int inp_B(int b[2][2]){
    for(int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            cout<<"Masukan Data B["<<i<<"]["<<j<<"] = ";
            cin>>b[i][j];
        }
    }
}

int out_A(int a[2][2]){
    cout<<"\nARRAY A\n";
    for(int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            cout<<"["<<a[i][j]<<"]";
        }
        cout<<endl;
    }
}

int out_B(int b[2][2]){
    cout<<"\nArray B\n";
    for(int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            cout<<"["<<b[i][j]<<"]";
        }
        cout<<endl;
    }
}

int tambah (int a[2][2], int b[2][2], int c[2][2]){
    cout<<"\nARRAY A+B\n";
    for(int i=0; i<2; i++)
    {
        int x=0;
        for (int j=0; j<2; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cout<<"["<<c[i][j]<<"]";
            x=x+c[i][j];
        }

        cout<<" "<<x;
        cout<<endl;
    }
}

/*  for(int j=0; j<h; j++)
    {
        x=0;
        for (int i=0; i<g; i++)
        {
            x=x+c[i][j];
        }

        cout<<x<<" ";
    }
    cout<<endl;

}
*/
