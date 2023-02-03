#include<stdio.h>
int main()
{
	int score;
	printf("enter your score: ");
	scanf("%d",&score);
	switch(score/10)
	{
		case 10:printf("Grade A");
		        break;
		case 9:printf("Grade B");
		       break;
		case 8:printf("Grade C");
		       break;
		case 7:printf("Grade D");
		       break;
	    case 6:printf("Grade E");
	           break;
	    case 5:printf("Grade F");
	           break;
	}
}
