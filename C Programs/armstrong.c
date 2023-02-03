#include<stdio.h>
int main()
{
	int num,temp,sum=0,rem,i;
	printf("enter the number: ");
	scanf("%d",&num);
	temp=num;
	for(i=1;i<=num;i++)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	if(temp==sum)
	{
		printf("%d is armstrong",temp);
	}
	else{
		printf("%d is not armstrong",temp);
	}
}
