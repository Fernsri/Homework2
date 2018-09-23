#include<stdio.h>
int main()
{
	int A,B,C,D,F,score;
	
	printf("score_of_student : ");
	scanf("%d",&score);
	
	if(score>=80 && score<=100)
	{
		printf("Your grade is A.");
	}
	else if(score>=70 && score<80)
	{
		printf("Your grade is B.");
	}
	else if(score>=60 && score<70)
	{
		printf("Your grade is C.");
	}
	else if(score>=50 && score<60)
	{
		printf("Your grade is D.");
	}
	else
	{
		printf("Your grade is F.");
	}
	
	return 0;
	
}
