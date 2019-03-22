#include<stdio.h>

void main()
{
    int i,j,k,n,c=0,temp;
    int a[]={13,42,64,48,2,4,93,58,111,3,16,5,22,12,133,727,29,73,547,97,24,76,185};
    /*
    int a[23];
    for(i=0;i<23;i++)
    {
        scanf("%d",&a[i]);
    }
    */
    for(i=0;i<23;i++)
    {
       for(j=0;j<22;j++)
       {
            if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                c=c+1;
            }
       }
    }
       printf("%d                          \n",c);
       for(i=0;i<23;i++)
       {
            printf("%d  ",a[i]);
       }

}
