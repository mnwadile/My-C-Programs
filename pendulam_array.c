#include <stdio.h>

int main() {
	//code
	int t,i,j,temp,k;
	scanf("%d",&t);
	int n[t];
	int ans[1000],a[100][1000];
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n[i]);
	    for(j=0;j<n[i];j++)
	    {
	        scanf("%d ",&a[i][j]);
	    }
	    for(j=0;j<n[i];j++)
	    {
	        for(k=0;k<n[i]-1-j;k++)
	        {
	            if(a[i][k]<a[i][k+1])
	            {
	                temp=a[i][k];
	                a[i][k]=a[i][k+1];
	                a[i][k+1]=temp;
	            }
	        }
	    }
	}
	int l,r,c;
	for(i=0;i<t;i++)
	{
	    l=0;
	    r=n[i]-1;
	    c=0;
	    while(l!=r)
	    {
	        if(c%2==0)
	        {
	            ans[l]=a[i][c];
	            l++;
	            c++;
	        }
	        else
	        {
	            ans[r]=a[i][c];
	            c++;
	            r--;
	        }
	    }
	    for(j=0;j<n[j];j++)
	    {
	        printf("%d ",ans[j]);
	    }
	    printf("\n");

	}
	return 0;
}
