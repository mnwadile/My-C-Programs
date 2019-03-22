#include<stdio.h>
#include<math.h>

int find_div(int n)
{
    long long int i,j,c=0;
    for(j=1;j<=sqrt(n);j++)
    {
        if(n%j==0)
        {
            c=c+1;
        }
    }
    return 2*c;
}
void main()
{
    long long int i,j,k,n,c=0,sum=0,ans=0,rem=0;
    for(i=1;i<100000;i++)
    {
        if(find_div(i)==find_div(i+1))
        {
            sum=sum+1;
        }
    }
    while(sum!=0)
    {
        rem=sum%10;
        ans=ans+rem;
        sum=sum/10;
    }

    printf("%lld\n",ans);


}

