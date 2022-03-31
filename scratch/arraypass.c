

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int arrayfun(char myarray[]);


int main(){

    char array1[15] = { 'H', 'e'};
    int myreturn;

    myreturn = arrayfun(array1);
    return 0;

}

int arrayfun(char myarray[]) {
    puts(myarray);
    return 0;
}