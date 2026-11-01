/*
E1. Leap Y ear Check

Problem: Read a year and print whether it is a leap year .

Explanation: A year is leap if divisible by 4 but not by 100, or divisible by 400.

Sample: 
Enter the year: 2024 
It is a leap year ; 

1900 It is not a leap year;

*/
#include<stdio.h>

main(){
	int year;
	printf("Enter the year : ");
	scanf("%d ", &year);
	
	if( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		printf("%d is a loop year\n", year);
	}
	
	else{
		pritnf("%d is not a leap year.\n", year);
	}
	return 0;
}
