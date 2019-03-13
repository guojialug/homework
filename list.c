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

1.20
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10
int main()
{
	int i;
	float x;
	printf("input the x:\n");
	scanf("%f",&x);
	float a[N];
	int n;
	printf("please input the n:\n");
	scanf("%d",&n);
	printf("please input a[0]-a[n-1]:\n");
	for(i=0;i<n;i++)
	scanf("%f",&a[i]);
	float result=a[n-1];
	for(i=n-1;i>0;i--)
	{
		result=a[i-1]+x*result;
	}
	printf("the polynomail value is %f",result);
	return 0;
}
