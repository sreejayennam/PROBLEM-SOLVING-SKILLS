#include<stdio.h>
int main()
{
	int i,n;
	float arr[50],avg,sum=0;
	printf("enter no.of subjects: ");
	scanf("%d",&n);
	printf("enter %d subject marks",n);
	for(i=1;i<=n;i++)
	{
		scanf("%f",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+arr[i];
	}
	avg=sum/n;
	printf("Average score=%f",avg);
}
