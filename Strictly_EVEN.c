#include<stdio.h>
int main()
{
    int arr[100],i,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0&&i%2==1)
        {
            c=1;
            printf("False");
            break;
        }
    }
    if(c==0)
    {
        printf("True");
    }
}