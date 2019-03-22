#include<stdio.h>

void main()
{
    long int i,j,k,l,n,m,c=0,x=0,y=0,rem=0;
    for(i=1;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            for(k=0;k<9;k++)
            {
                for(l=0;l<9;l++)
                {
                   m=i+j+k+l;
                   n=i*j*k*l;
                   while(m!=0)
                   {
                        rem=m%10;
                        x=x*rem;
                        //y=y+rem
                        m=m/10;
                   }
                   while(n!=0)
                   {
                        rem=n%10;
                        //x=x*rem;
                        y=y+rem;
                        n=n/10;
                   }
                   if(5*x == y)
                   {
                        c=c+1;
                        printf("%ld%ld%ld%ld\n",i,j,k,l);
                       // printf("%lld  %lld \n",x,y);
                   }
                   x=0;
                   y=0;
                }
            }
        }
    }

    printf("%ld    ",c);
}
