#include<stdio.h>
int main()
{
	int N1,N2,i;
	printf("enter Starting number:");
	scanf("%d",&N1);
	printf("enter ending number:");
	scanf("%d",&N2);
	for(i=N1;i<=N2;i++)
	{
		if(i%2!=0)
		{
			printf("%d\t",i);
		}
	}
}
