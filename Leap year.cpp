#include <stdio.h>

int main()
{
	int a;
	printf("Enter THe year:");
	scanf("%d",&a);
	
	if(a%400==0)
		printf("The Year is Leap Year");
	else if(a%100==0)
		printf("The year is not leap year");
	else if(a%4==0)
		printf("The year is leap year");
	else
		printf("The year is not leap year");
		
	return 0;
}
