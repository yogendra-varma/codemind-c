#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,temp=0,sum=0,i=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        i=i+1;
        n=n/10;
    }
    n=temp;
    while(n)
    {
        d=n%10;
        sum=sum+pow(d,i);
        n=n/10;
        i--;
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}