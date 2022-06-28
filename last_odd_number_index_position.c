#include<stdio.h>
int main()
{
    int a[100],i,n,ind;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&i);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            ind=i;
        }
    }
    printf("%d",ind);
}    