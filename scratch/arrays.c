
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

    char array1[20];
    char *p_element = array1;
    char **pp_element = &p_element;

    int i;

    strcpy (array1, "Hello World");

    p_element = &array1[0];
    for (i=0; i<11; i++){
        putchar(*p_element);
        putchar(**pp_element);
        p_element++;
    }
    putchar('\n');



    return 0;
    
}