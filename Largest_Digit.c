#include<stdio.h>
int main()
{
    int x,y,l=0;
    scanf("%d",&x);
    while(x>0)
    {
        y=x%10;
        if(l<y)
        {
            l=y;
        }
        x=x/10;
    }
    printf("%d
",l);
    return 0;
}