#include<stdio.h>
int main()
{
	int score;
	
	printf("score_of_student : ");
	scanf("%d",&score);
	
	if(score>=80 && score<=100)
	{
		printf("Your grade is A.");
	}

	else if(score>=75 && score<80)
	{
		printf("Your grade is B+.");
	}
	
	else if(score>=70 && score<75)
	{
		printf("Your grade is B.");
	}

	else if(score>=65 && score<70)
	{
		printf("Your grade is C+.");
	}
	
	else if(score>=60 && score<65)
	{
		printf("Your grade is C.");
	}

	else if(score>=55 && score<60)
	{
		printf("Your grade is D+.");
	}
	
	else if(score>=50 && score<55)
	{
		printf("Your grade is D.");
	}
	
	else if(score>0 && score<50)
	{
		printf("Your grade is F.");
	}
	
	else if(score<0)
	{
		printf("Error!!!");
	}

	else if(score>100)
	{
		printf("Error!!!");
	}
	
	return 0;
	
}
