

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct sample { char myarray[20]; int rooms;};

struct sample myfunction( struct sample alpha);

int main() {

    struct sample first;

    strcpy(first.myarray, "Hello World\n");
    first.rooms = 2;
    myfunction(first);

    first = myfunction(first);
    printf ("The room count is %d\n", first.rooms);
    return 0;


}

struct sample myfunction (struct sample alpha) {
    alpha.rooms = 3;
    return alpha;
}