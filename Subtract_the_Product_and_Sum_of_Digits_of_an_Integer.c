
#include<stdio.h>
int main()
{
    int n,sum=0,p=1,r,a;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        p=p*r;
        n=n/10;
    }
    a=p-sum;
    printf("%d",a);
    return 0;
}
