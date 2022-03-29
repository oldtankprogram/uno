

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){


    
    struct room { char roomName[20];
    char description[200];
    };
    struct room *current;

    current = malloc(sizeof(struct room));
    strcpy (current->roomName, "Laboratory");
    strcpy (current->description, "Lab Room");

    puts(current->roomName);
    free (current);
    return 0; 

}







