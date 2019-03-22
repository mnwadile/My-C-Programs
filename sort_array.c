#include<stdio.h>

void main()
{
    int a[]={3,5,10,15,15,23,25,29,31,36};
    int b[]={-20,2,6,12,28,30,32,38,150,160,170};
    int c[21],s1=9,s2=10,s3=0,i=0,j=0;

    for(i=0;i<21;i++)
    {
        if(s1>=0 && s2>=0)
        {
            if(a[s1]>b[s2])
            {
                c[i]=a[s1];
                s1 = s1-1;
            }
            else
            {
                c[i]=b[s2];
                s2 = s2-1;
            }
        }
        else if(s1<0)
        {
            c[i] = b[s2];
            s2 = s2-1;
        }
        else if(s2<0)
        {
            c[i] = a[s1];
            s1 = s1-1;
        }
    }

    for(i=0;i<21;i++)
    {
        printf("%d  ",c[i]);
    }
}
