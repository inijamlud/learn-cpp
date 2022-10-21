#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>

using namespace std;

main()
{
    int i, j, a, k, m;
    char nm[5][20], temp[40];

    cout<<"Masukan 5 Nama\n";

    for (i=1; i<=5; i++)
    {
        cout<<"Masukan nama ke-"<<i<<" = ";
        gets(nm[i]);
        for (j=1; j<=(i-1); j++)
        {
                if (strcmp(nm[i], nm[j])<=0)
                {
                    strcpy (temp, nm[i]);
                    for (k=(i-1); k>=j; k--)
                    {
                        m=(k+1);
                        strcpy (nm[m], nm[k]);
                    }
                    strcpy (nm[j], temp);
                }
            }
        }

    cout<<"\nHasil pengurutannya adalah : \n";
    for (i=1; i<=5; i++)
    {
        cout<<"\n"<<nm[i];
    }
}
