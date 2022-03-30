

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int arrayfun(char myarray[]);
int myreturn;

int main(){

    char array1[15] = { 'H', 'e'};

    myreturn = arrayfun(array1);
    return 0;

}

arrayfun( a[]) {
    puts(a);
    return 0;
}