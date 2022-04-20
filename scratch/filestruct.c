
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
    int one, two;

    fpin = fopen ("/home/jamie/input", "r");
    fpout = fopen ("/home/jamie/output", "r+");

    buffer = calloc(300, sizeof(char));

    if (buffer == NULL) {
        puts ("Unable to allocate memory for buffer.");
        exit(1);
    }

    puts ("Entering code");
    if (getline(&buffer, &bufsiz, fpin) < 1) {puts ("Empty file"); return 1;}
    puts (buffer);
    puts("Reading the values into variables.");
    while (sscanf(buffer, "%d %d", &one, &two) > 0){
        printf ("%d and %d", one, two);
        getline(&buffer, &bufsiz, fpin);
    }
    return 0;
    
    


}



