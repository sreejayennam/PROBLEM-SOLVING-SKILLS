#include<stdio.h>
int main()
{
	int n1,n2,temp;
	printf("enter n1:");
	scanf("%d",&n1);
	printf("enter n2:");
	scanf("%d",&n2);
	printf("\nbefore swapping:\nn1=%d and n2=%d",n1,n2);
	temp=n1;
	n1=n2;
	n2=temp;
	printf("\n\nafter swapping:\nn1=%d and n2=%d",n1,n2);
}
