#include<stdio.h>

void main()
{
    int i,j,k,n=5,f=0;
    for(i=1;i<=5;i++)
    {
        if(i%2==1)
            f = 1;
        else f = 0;
        for(j=1;j<i;j++)
        {
            printf("%d ",f);
            if(f==0)
                f = 1;
           // else f = 0;
        }
        printf("\n");
    }
}
