#include<stdio.h>
#include<string.h>

void main()
{
    int i,j,k,s1,s2,n,m;
    char s[100],a,ans[100];
    printf("Enter sentence \n");
    gets(s);
    //scanf("%s",&s);
    n=strlen(s);
    m=n;
    int t=0;
    for(i=(n-1);i>=0;i--)
    {
        s1=i;
        for(j=i-1;j>=0;j--)
        {
            if(s[j]=='\0')
            {
                s2=j+1;
            }
        }
        for(k=s2;k<=s1;k++)
        {
            ans[t++]=s[k];
        }
        ans[t++]='\0';
        i=s2;
    }
}
