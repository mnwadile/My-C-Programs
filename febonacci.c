#include<stdio.h>
#include<conio.h>
void main()
{
    int N,i,a=-1,b=1,c;
    printf("enter a number");
    scanf("%d",&N);
    for(i=1;i<N;i++)
    {
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
    }

}
