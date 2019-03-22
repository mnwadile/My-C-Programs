#include<stdio.h>

void main()
{
    long int i,j,k,n,c=0,s=0;
    for(i=5;i<=10000;i++)
    {
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                c=c+j+(i/j);
            }
        }
        if(i==c+1)
        {
            s=s+1;
        }
        if(s==10)
            break;

        c=0;
    }
    printf("%ld\n",i);


}
