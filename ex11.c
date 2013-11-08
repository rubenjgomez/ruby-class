#include <stdio.h>
int main (int argc, char *argv[])
{
   
   int ages [] = {23, 43, 12, 19, 2};
   int count = sizeof(ages)/sizeof(int);
   int i = 0;

   for(i = 0; i < count; i++){
        printf("age: %d\n", ages[i]);

   }

    printf("\n\n");

    int *cur_age = ages;
    char *names[] = {"Nate", "Myron", "Jared", "Ruben", "Katia"};
    char **cur_name = names;

    for(i = 0; i < count; i++){

        printf("%s is %d years old \n", *(cur_name + i), *(cur_age + 1));
    }
    printf("\n\n");

    for(i = 0; i < count; i++){
        printf("%s is %d years old \n", cur_name[i], cur_age[i]);
    }
    printf("\n\n");
    for (cur_name = names, cur_age = ages; (cur_age-ages) < count; cur_name++, cur_age++)
    {
        printf("Why, is this so overly complicated!!?? %s\n", *cur_name);
    }

    return 0;
}