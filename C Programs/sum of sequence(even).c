#include<stdio.h>
int main()
{
	int arr[50],n,sum=0,i,j;
	printf("enter no.of terms:");
	scanf("%d",&n);
	printf("enter %d numbers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("sum of sequence:");
	for(j=0;j<n;j++)
	{
		if((arr[j]%2)==0)
		{
		sum=sum+arr[j];
	    }
	}
	printf("%d",sum);
	
}
