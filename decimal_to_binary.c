#include<stdio.h>

void main()
{
    int i,j,k,n;
    int a[10];
    printf("Enter decimal number \n");
    scanf("%d",&n);
    i=0;
    while(n>0)
    {
        a[i]=n%2;
        n=n/2;
        i=i+1;
    }
    //printf("%d  ",i);
    int m=i;
    for(i=(m-1);i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
