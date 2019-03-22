#include<stdio.h>

void main()
{
    unsigned long long int i,j,f=1;
    for(i=1;i<=50;i++)
    {
        f=f*i;
    }
    printf("%llu  \n",f);
}
