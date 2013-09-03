#include <stdio.h>
int main(int argc, char *argv[])
{
	int areas[] = {10,2,13,14,20};
	char name[] = "Nates";
	char full_name[] = {'N', 'a', 't', 'e', 'D', 'o', 'g', 'g', '\0'};

	printf("My name is %s\n", name);
	printf("You can call me %s\n", full_name);
	
int x;
	for ( x = 0; x < 5; x++ ){
		printf("%c\n", name[x]);
	}
	return 0;
}