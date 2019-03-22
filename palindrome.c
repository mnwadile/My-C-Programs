#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char one[10],two[10];
    int cmp;
    printf("enter the string");
    scanf("%s",&one);
    strcpy(two,one);
    strrev(one);
    cmp=strcmp(one,two);
    if(cmp==0)
    {
        printf("enter string is palindrome");
    }
    else
    {
        printf("enter string is not a palindrome");
    }
    getch();
}
