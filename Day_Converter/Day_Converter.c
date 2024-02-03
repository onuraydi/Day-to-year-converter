#include <stdio.h>

// Write a C program to convert specified days into years,month ,weeks and days

int main()
{
	int day, week, month, year;
	
	printf("Input the number of day: ");		scanf("%d",&day);
	
	year = day / 365;
	day = day % 365;
	
	month = day / 30;
	day = day % 30;
	
	week = day / 7;
	day = day % 7;
	
	printf("Year: %d\n",year);
	printf("Month: %d\n",month);
	printf("Week: %d\n",week);
	printf("Day: %d\n",day);
	
	return 0;
}
