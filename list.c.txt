1.16
#include<stdio.h>
void main()
{
    int X,Y,Z,a;
    printf("please input the X");
    scanf("%d",&X);
    printf("please input the Y");
    scanf("%d",&Y);
    printf("please input the Z");
    scanf("%d",&Z);
    if(X<Y)
    {
        a=Y;
        Y=X;
        X=a;
    }

    if(X<Z)
    {
        a=X;
        X=Z;
        Z=a;
    }
    if(Y<Z)
    {
        a=Y;
        Y=Z;
        Z=a;
    }
    printf("%d%d%d",X,Y,Z);
}
