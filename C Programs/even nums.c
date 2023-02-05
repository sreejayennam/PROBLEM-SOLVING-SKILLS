#include<stdio.h>
int main()
{
	int n,i;
	printf("enter no.of elements:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
          printf("%d ",i);
		}
	}
}
