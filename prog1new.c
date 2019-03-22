#include<stdio.h>

int findbin(int n)
{
    while(n%2!=0)
    {
        n=n/2;
    }
    if(n==0)
        return 1;
    else return 0;
}

void main()
{
    int i,j,k,c=0;
    int a[]={6,5,13,16,6,15,1,9,15,2,8,16,14,10,2,2,6,6,3,2,12,8,3,3,11,8,15,15,1,1,6,3,16,3,12,16,14,15,10,12,12,5,14,12,15,4,11,2,7,12};
    for(i=0;i<49;i++)
    {
        for(j=i+1;j<49;j++)
        {
            if(findbin(a[i]+a[j]))
                c=c+1;
        }
    }
    printf("%d",c);
}
