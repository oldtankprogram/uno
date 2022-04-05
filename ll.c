


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    struct student { char name[20];
                    int age};

    struct student *pool[20];

    
    pool[0] = calloc (1, sizeof(struct student));
    strcpy ( pool[0]->name, "Alfred");
    puts (pool[0]->name);
    free (pool[0]);

    return 0;


}