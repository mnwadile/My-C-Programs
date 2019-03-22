#include<stdio.h>

void print_pat(int n)
{
    if(n<5)
        print_pat(n+1);
    printf("%d\n",n);
}
void main(char* argv[], int argc)
{
    print_pat(1);
}
