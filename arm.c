#include<stdio.h>
int main()
{
    int n,r,sum=0,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==t)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
