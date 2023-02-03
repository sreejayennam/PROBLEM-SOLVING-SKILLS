#include<stdio.h>
int main()
{
	int num,rem,sum;
	printf("enter the number: ");
	scanf("%d",&num);
	int temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("the sum of %d is %d",temp,sum);
}
