#include<stdio.h>
int main()
{
	int a,rem=0,temp,i,sum=0;
	printf("enter the number: ");
	scanf("%d",&a);
	temp=a;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum*10+rem;
		temp=temp/10;
	}
	if(a==sum)
	{
		printf("%d is pallindrome",a);
	}
	else
	{
		printf("%d is not pallindrome",a);
	}

	
}
