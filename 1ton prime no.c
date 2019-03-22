#include <stdio.h>
#include<conio.h>
int main()
{
    int N,x=2,i;
    printf("enter a number");
    scanf("%d",&N);
    while(N)
    {
        for(i=2;i<x;i++)
            if(x%i==0)
            break;
        if(i==x)
        {
            printf("%d ",x);
            N--;
        }
        x++;
    }


}
