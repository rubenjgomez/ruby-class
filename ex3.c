#include <stdio.h>
int main (int argc, char *argv[])
{
	char initial = 'R';
	char first[] = "Super";
	char last[] = "Man";
	
	printf("My first name is %s\n", first);
	printf("My middle intial is %c\n", initial);
	printf("My last name is %s\n", last);
	printf("My whole name is %s %c %s\n", first, initial, last);
	
	return 0;
}