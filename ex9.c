#include <stdio.h>
#include <ctype.h>
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguents(int argc, char #argv[])
{
	int i=0:
	for (i=0; i < argc; i++)
	{
		print_letters(argv[i]);
	}
}
void print_letters(char arg[])
{
	int i = 0;
	for (i=0; arg[i] != '0'; i++)
}
	{
		char ch = arg[i]
		if(can_print_it(ch))
		{
			printf("'%c' == %d", ch, ch);
		}
	}
	printf("\n");
}
int can_print_it(char ch)
{
	return isalpha(ch) || isblank(ch);
}
int main(int argc, char *argv[])
{
	print_arguents(argc, argv)
	return 0;
}






assignment #2
how to take user input fgets, cin
ask the user for a word, print out each letter in the word and must identify vowels, 
no switch statements, must use one function. must be able to exit the REPL with the work exit.