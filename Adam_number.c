#include<stdio.h>
int main()
{
   int n,r,x=0,a,b,c=0,y;
   scanf("%d",&n);
   y=n*n;
   while(n>0)
   {
       r=n%10;
       x=x*10+r;
       n=n/10;
       
   }
   a=x*x;
   while(a>0)
   {
       b=a%10;
       c=c*10+b;
       a=a/10;
       
   }
   if(y==c)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}