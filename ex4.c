#include <stdio.h>
int main(int argc, char *argv[])
{
	int areas[] = {10,2,13,14,25};
	char name[] = "Nate";
	char full_name[] = {'N', 'a', 't', 'e', ' ', 'D', 'o', 'g', 'g', '\0'};
	
	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas: %ld\n", sizeof(areas));
	printf("The number of areas: %ld\n", sizeof(areas) / sizeof(int));
	
	printf("The size of a char: %ld\n", sizeof(char));
	printf("The size of name: %ld\n", sizeof(name));
	printf("The number of chars in name: %ld\n", sizeof(name) / sizeof(char));
	
	printf("Size of full name: %ld\n", sizeof(full_name));
	printf("Number of chars: %ld\n", sizeof(full_name) / sizeof(char));
	
	return 0;
}