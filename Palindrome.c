#include<stdio.h>
int main()
{
    int n,r,sum=0,org;
    scanf("%d",&n);
    org=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(org==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}