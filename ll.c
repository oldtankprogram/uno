


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    struct student { char name[20];
                    int age;};
    struct student first;

    strcpy (first.name, "Charlie");
    puts (first.name);
    return 0;
}