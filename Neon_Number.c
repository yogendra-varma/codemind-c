
#include <stdio.h>

int main(void)
{
   int n;
   scanf("%d", &n);
   int x = n*n, sum=0;
   for(int i = 0; x >= 1; i++)
   {
       sum = sum + (x % 10);
       x = x/10;
   }
   if(sum == n)
   {
       printf("Neon Number
");
   }
   else
   {
       printf("Not Neon Number
");
   }
}
