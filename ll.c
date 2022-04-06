


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    struct student { char name[20];
                    int age;};

    struct student *pool[20];
    int a;
    int count = 0;
    
/*Initialize the pool */

for (a = 0; a < 20; a++) 
    pool[a] = NULL;




    pool[0] = calloc (1, sizeof(struct student));
    strncpy ( pool[0]->name, "Alfred", sizeof("Alfred") + 1);
    pool[0]->age = 21;
    puts (pool[0]->name);
    printf ("Age: %d\n", pool[0]->age);

    pool[1] = calloc (1, sizeof(struct student));
    strncpy ( pool[1]->name, "Brent", sizeof("Brent") + 1);
    pool[1]->age = 20;
    puts (pool[1]->name);
    printf ("Age: %d\n", pool[1]->age);

    pool[2] = calloc (1, sizeof(struct student));
    strncpy ( pool[2]->name, "Charlie", sizeof("Charlie") + 1);
    pool[2]->age = 22;
    puts (pool[2]->name);
    printf ("Age: %d\n", pool[2]->age);

/* Traverse the pool, printing the data */

    while ( count < 3) {
    printf ("Student %d is %s and is %d years old.\n", count, pool[count]->name, pool[count]->age);
    count++;
    }

/* Traverse the pool, freeing memory */
    count = 0;

    while ( count < 3) {
        free pool[count];
        count++;
    }


    return 0;


}