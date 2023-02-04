#include<stdio.h>
int main()
{
	int n1,n2;
	printf("enter first number n1: ");
	scanf("%d",&n1);
	printf("enter second number n2: ");
	scanf("%d",&n2);
	printf("\nBefore swapping\nn1=%d and n2=%d",n1,n2);
	n1=n1-n2;
	n2=n1+n2;
	n1=n2-n1;
	printf("\n\nAfter swapping\n n1=%d and n2=%d",n1,n2);
}
