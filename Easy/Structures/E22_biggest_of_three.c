/*
E22. Macros: Set Bit, Clear Bit, Biggest of Three
Problem: Write macros SET
_
BIT(num,n), CLEAR
BIT(num,n) and
_
BIGGEST OF THREE(a,b,c), and use them in main().
_
_
Explanation: P arenthesise macro arguments to avoid precedence errors. Biggest-of- three uses nested ternary operators.

Sample: num=5, n=1  set: 7, clear: 5; 10 20 15 The biggest ... is: 20
*/

#include<stdio.h>

#define SET_BIT(num, n) ((num) | (1U << (n)))
#define CLEAR_BIT(num, n) ((num) & ~(1U << (n)))
#define BIGGEST_OF_THREE(a, b , c)  (((a) > (b)) ? (((a) > (c)) ? (a) : (c)) : (((b) > (c)) ? (b) : (c)))

int main(){
	int num = 5, n = 1;
	int a = 10, b = 20, c = 15;
	printf("Set bit : %d \n", SET_BIT(num, n));
	printf("Clear bit : %d \n", CLEAR_BIT(num, n));
	printf("The Biggest of three is : %d \n", BIGGEST_OF_THREE(a, b, c));


	return 0;
}
