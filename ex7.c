#include <stdio.h>
int main(int argc, char *argv[])

{
	int i = 0;
	
	if(argc == 1)	
	{
		printf("One argument");
	}	else if(argc > 1 && argc < 4){
		printf("Your arguments are:\n");

		for(i=0; i < argc; i++){
			printf("%s\n", argv[i]);
		}
	} else{

		printf("Too many arguments");
	}


	return 0;

}