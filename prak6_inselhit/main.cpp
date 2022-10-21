#include <iostream>

using namespace std;

int main()
{
    int a[100],ac,aa=0,ab,h,j;
    cout<<"Insertion Sort"<<endl;
    cout<<"masukkan jumlah data = ";
    cin>>h;

    for(int i=0; i<h; i++)
    {
        cout<<"Masukkan data = " ;
        cin>>a[i];
    }

    for(int i=0; i<h; i++)
    {
        j=i;
        while(j>0 && a[j]<a[j-1])
        {
            int temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }

    for(int i=0; i<h; i++)
    {
        cout<<" "<<a[i];
    if (a[i]==1)
        {
            aa=aa+1;
        }
        else if(a[i]==2)
        {
            ab=+1;
        }
        else if(a[i]==3)
        {
            ac=+1;
        }
        }

    cout<<"\n1 = "<<aa;
    cout<<"\n2 = "<<ab;
    cout<<"\n3 = "<<ac;
}
