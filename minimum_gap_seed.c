#include<stdio.h>

void main()
{
    int a[]={1,5,7,9,10,3,5,5,8,6,2,3,4,8,3};
    int c1=-1,c2=-1 , gap1=0,gap2=0,gap = 0,m,n,f1=0,f2=0,p1,p2,i;
    scanf("%d",&m);
    scanf("%d",&n);

    for(i=0;i<14;i++)
    {
        if(a[i] == m  )
        {
            p1 = i;
            if(f1 == 0)
            {
                c1=c1+1;
                f1 = 1;
            }
            else
            {
                c1 = 0;
            }

        }
        else if(a[i] == n  )
        {
            p2=i;
            if(f2 == 0)
            {
                c1=c1+1;
                f1 = 1;
            }
            else
            {
                c1 = 0;
            }
        }
        else
        {
            c1 = c1+1;
            c2 = c2+1;
            if(c1>c2)
                gap = c1 - c2;
            else gap = c2 -c1;
        }
    }
    printf("%d , %d ,%d ",p1,p2,gap);

}
