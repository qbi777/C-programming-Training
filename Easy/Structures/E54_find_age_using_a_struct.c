/*E54. Find Age using a Structure

Problem: Read a person's name and birth year into a structure and print the age for a
given current year .

Explanation: age = current_year - birth_year.

Sample: Ravi 2000 (current year 2024) Age = 24
*/

#include<stdio.h>

struct Person{
	char name[50];
	int birth_year;
};
int main(){
	struct Person p;
	int current_year;
	
	printf("Enter the name and birth year : ");
	scanf("%49s %d", p.name, &p.birth_year);

	printf("Enter the current year : ");
	scanf("%d", &current_year);

	printf("Age = %d\n", current_year - p.birth_year);

	return 0;
}
