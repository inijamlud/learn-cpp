#ifndef SOR_H_INCLUDED
#define SOR_H_INCLUDED
using namespace std;

void desselsort(int k[], int);
void asselsort(int k[], int);

void desselsort(int k[], int g)
{
    int temp;
    for (int a=0; a<g-1; a++)
    {
        int c=a;
        for (int d=a+1; d<g; d++)
        {
            if (k[c] < k[d])
            {
                c=d;
            }
        }
        temp=k[c];
        k[c]=k[a];
        k[a]=temp;
    }
    for (int i=0; i<g; i++)
    {
        cout<<k[i]<<" ";
    }
}

void asselsort(int k[], int g)
{
    int temp;
    for (int a=0; a<g-1; a++)
    {
        int c=a;
        for (int d=a+1; d<g; d++)
        {
            if (k[c] < k[d])
            {
                c=d;
            }
        }
        temp=k[c];
        k[c]=k[a];
        k[a]=temp;
    }
    for (int i=g-1; i>=0; i--)
    {
        cout<<k[i]<<" ";
    }
}





#endif // SOR_H_INCLUDED
