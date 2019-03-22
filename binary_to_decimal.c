#include<stdio.h>
#include<string.h>

void main()
{
    int n,a[10],i,j,k,c=0,u=1;
    char b[100];
    printf("Enter binary string\n");
    scanf("%s",&b);
    n=strlen(b);
    for(i=(n-1);i>=0;i--)
    {
        if(b[i]=='1')
        {
            c=c+u;
        }
        u=2*u;
    }
    printf("%d  ",c);

}
