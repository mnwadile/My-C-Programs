#include<stdio.h>

void main()
{
    int i,j,k,n,m,s,l,b;
    int a[10];
    printf("Enter element in array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to search\n");
    scanf("%d",&s);
   // m=m/2;
    l=0;
    b=9;
    m=(l+b)/2;
    while(l<b);
    {
        printf("%d %d %d \n",l,m,b);
        if(a[m]==s)
        {
            printf("Element found at %d",m);
            return;
        }

        if(a[m]>s)
        {
            b=m-1;
        }
        else if(a[m]<s)
        {
            l=m+1;
        }

        m=(l+b)/2;
        printf("%d %d %d \n",l,m,b);
        printf("\n\n");
    }
    printf("Element is not found");
}
