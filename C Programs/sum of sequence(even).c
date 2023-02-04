#include<stdio.h>
int main()
{
	int n,sum=0,j;
	printf("enter no.of terms:");
	scanf("%d",&n);
	printf("\neven sequence:");
	for(j=1;j<=n;++j)
	{
		if((j%2)==0)
		{
		printf("%d ",j);
		sum=sum+j;
	    }
	}
	printf("\n\nsum of even sequence %d",sum);
	
}
