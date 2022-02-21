#include<stdio.h>
int main()
{
    int L,B,W,C,T;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    if(2*W<L&&2*W<B) {
        T=(L-(2*W))*(B-(2*W));
        if(T>=0)
printf("%d",(L*B-T)*C);
else
printf("Impossible");
}
else
printf("Impossible ");
return 0;
}
