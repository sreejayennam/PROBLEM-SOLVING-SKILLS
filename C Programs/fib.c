#include<stdio.h>
int fib(int n)
{
	if(n<=1)
	return n;
	return fib(n-1)+fib(n-2);
}
int main()
{
	int num,n=0,i;
	printf("enter no.of terms: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d\t",fib(n));
		n++;
	}
}
