#include<stdio.h>
int main()
{
	int  arr[50],n,i,j,min,max;
	printf("enter no.of elements:");
	scanf("%d",&n);
	printf("enter %d numbers:",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(j=1;j<=n;j++)
	{
      if(arr[j]<arr[j+1])
      {
      	max=arr[j];
	  }
	  if(arr[j]>arr[j+1])
	  {
	  	min=arr[j];
	  }
    }
    printf("maximum value=%d",max);
    printf("\nminimum value=%d",min);
    

}
