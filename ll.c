


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    struct student { char name[20];
                    int age;};

    struct student *pool[20];

    
    pool[0] = calloc (1, sizeof(struct student));
    strcpy ( pool[0]->name, "Alfred");
    pool[0]->age = 21;
    puts (pool[0]->name);
    printf ("Age: %d", pool[0]->age);

    pool[1] = calloc (1, sizeof(struct student));
    strcpy ( pool[1]->name, "Brent");
    pool[1]->age = 20;
    puts (pool[1]->name);
    printf ("Age: %d", pool[1]->age);

    pool[2] = calloc (1, sizeof(struct student));
    strcpy ( pool[2]->name, "Charlie");
    pool[2]->age = 22;
    puts (pool[2]->name);
    printf ("Age: %d", pool[2]->age);


    free (pool[0]);
    free (pool[1]);
    free (pool[2]);

    return 0;


}