//time 3/4/2016
//author she

//1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,j,k,n;
	n=0;
	for(i=1;i<5;i++)
	  for(j=1;j<5;j++)
		for(k=0;k<5;k++)
		{if (i!=j&&j!=k&&i!=k)
			{
				n=n+1;
				printf("%d%d%d\n",i,j,k);
			}
		}
	printf("共有个%d三位数",n);
	return 0;
}
