#include<stdio.h>
int cont=1;
void print(int str[],int n);
void dispatch(int str[],int k,int n)
{
	int i,temp;
	if(k==n-1)print(str,n);//k和n-1相等，即一趟递归走完
	else{
		for(i=k;i<n;i++){//把当前节点元素与后续节点元素交换
			temp=str[k]; str[k]=str[i]; str[i]=temp;//交换
			dispatch(str,k+1,n);//把下一个节点元素与后续节点元素交换
			temp=str[i]; str[i]=str[k]; str[k]=temp;//恢复原状
		}
	}
}
//判断整数序列 str[] 是否满足进出栈规则, 若满足则输出
void print(int str[],int n)
{
	int i,j,k,l,m,flag=1,b[2];
	for(i=0;i<n;i++)    // 对每个str[i] 判断其后比它小的数是否为降序序列
	{
		m=0;
		for(j=i+1;j<n&&flag;j++){
 			if (str[i]>str[j])
	 		{
	 			if (m==0) b[m++]=str[j];//记录str[i]后比它小的数
     			else
			 	{
			 		//如果之后出现的数比记录的数还大，改变标记变量
		 			if (str[j]>b[0]) flag=0;
		 			//否则记录这个更小的数
        			else b[0]=str[j];
      			}
      		}
		}
	}
	if(flag)        // 满足出栈规则则输出 str[] 中的序列
	{
		printf(" %2d:",cont++); //输出序号
        for(i=0;i<n;i++)
			printf("%d",str[i]);//输出序列
        printf("\n");
    }
}
int main()
{
	int str[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		str[i]=i+1;
	dispatch(str,0,n);
	printf("\n");
	return 0;
}

