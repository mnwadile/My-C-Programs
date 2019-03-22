#include <stdio.h>

void main()
{
    int a[2][2];int i,j;
    printf("enter the 4 values of matrix");

    for(i=0;i<2;i++)

    {
        for(j=0;j<2;j++)
        {
        scanf("%d",&a[i][j]);
        }
        printf("\n");

    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",&a[i][j]);
        }
        printf("\n");
    }


}
