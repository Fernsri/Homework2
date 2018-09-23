
#include<stdio.h>
int main()
{
	int n1;
	int n2;
	int n3;
	
	printf("Enter your 3 number (eg.1 2 3 or 5 7 3) : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1>n2 && n2>n3)
	{
		printf("Max : %d \nMin : %d",n1,n3);
	}
	
	else if(n1>n3 && n3>n2)
	{
		printf("Max : %d \nMin : %d",n1,n2);
	}
	
	else if(n2>n1 && n1>n3)
	{
		printf("Max : %d \nMin : %d",n2,n3);
	}
	
	else if(n2>n3 && n3>n1)
	{
		printf("Max : %d \nMin : %d",n2,n1);
	}
	
	else if(n3>n1 && n1>n2)
	{
		printf("Max : %d \nMin : %d",n3,n2);
	}

	else if(n3>n2 && n2>n1)
	{
		printf("Max : %d \nMin : %d",n3,n1);
	}
	
	else if(n1=n2=n3)
	{
		printf("Max : %d \nMin : %d",n1,n2);
	}

	return 0 ;
	
} 
