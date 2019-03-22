#include<stdio.h>

void main()
{
    int i,j,k,n,d,a[5];
    float r;
    printf("Enter number \n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    d=a[1]-a[0];
    r=(a[1]*1.0)/a[0];
    for(i=1;i<4;i++)
    {
        if(a[i+1]-a[i]!=d)
            break;
    }
    //printf("%d",i);
    if(i==4)
        printf("Given sequence in AP\n");

    for(i=1;i<4;i++)
    {
        if(a[i+1]/a[i]!=r)
            break;
    }
    //printf("%d",i);
    if(i==4)
        printf("Given sequence in GP\n");
}
