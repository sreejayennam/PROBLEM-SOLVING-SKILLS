#include<stdio.h>
int main()
{
	int n,i,arr[50],search;
	printf("enter no.of terms: ");
	scanf("%d",&n);
	printf("enter %d numbers: ",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter search element: ");
	scanf("%d",&search);
	for(i=1;i<=n;i++)
	{
		if(arr[i]==search)
		{
			printf("element is at %d position",i);
		}
	}
}
