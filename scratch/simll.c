
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    struct person {char *name; int age; struct person *next;};
    FILE *fpin;
    FILE *fpout;
    char *buffer;
    size_t bufsiz = 300;
    int one, two, collector;

    collector = 0;

    fpin = fopen ("/home/jamie/input", "r");
    fpout = fopen ("/home/jamie/output", "r+");

    buffer = calloc(300, sizeof(char));

    if (buffer == NULL) {
        puts ("Unable to allocate memory for buffer.");
        exit(1);
    }

    puts ("Entering code");


    while (getline(&buffer, &bufsiz, fpin) > 0){
        sscanf(buffer, "%d %d", &one, &two);
        printf ("%d and %d\n", one, two);
        collector = collector + one + two;
    }

    printf ("The total amount of all the numbers is %d", collector);
 
    return 0;
    
    


}



