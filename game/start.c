

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){


    
    struct room { char roomName[20];
    char description[200];
    struct room *p_next;
    };
    struct room *current;
    struct room *orig;

    current = NULL;
    orig = NULL;


    if (current = malloc(sizeof(struct room)) == NULL) return 1;
    current->p_next = NULL;
    orig = current;
    strcpy (current->roomName, "Laboratory");
    strcpy (current->description, "Lab Room");
    current->p_next = malloc(sizeof(struct room));
    puts(current->roomName);

    current = current->p_next;
    strcpy (current->roomName, "Laboratory 2");
    strcpy (current->description, "Another Lab Room");

    puts(current->roomName);
    free (current);
    free (orig);
    return 0; 

}







