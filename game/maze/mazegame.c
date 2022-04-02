
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct squareNode {struct squareNode *north;
                   struct squareNode *south;
                   struct squareNode *east;
                   struct squareNode *west;
                   int isEnd;
                   int isBegin;
                   };

int buildMaze (struct squareNode *startNode);

int main()
{



    struct squareNode *startNode, *curNode;
    struct cleaner    {struct squareNode *node;
                   struct squareNode *nextNode;
                   };
    struct cleaner *headClean, *curClean;

    /* Initialize first node */

    startNode = calloc(sizeof(struct squareNode), 1);
    startNode->isBegin = 1;
    curNode = startNode;
    headClean->node = curNode;
    buildMaze(startNode);
    if (curNode->isBegin == 1) {
        puts ("You're at the beginning.");
    }

/* Clean up memory */

    



    return 0;
        

}

int buildMaze (struct squareNode *startNode)
{

    struct squareNode *curNode, *nextNode, *prevNode;
    curNode = startNode;
/* Create the entry platform node */
    nextNode = calloc(sizeof(struct squareNode), 1);

    startNode->north = nextNode;
    startNode->south = NULL;
    startNode->east = NULL;
    startNode->west = NULL;
/* Create the first node in the maze */
    prevNode = curNode;
    curNode = nextNode;
    nextNode = calloc(sizeof(struct squareNode), 1);

    curNode->north = nextNode;
    curNode->east = NULL;
    curNode->west = NULL;
    curNode->south = prevNode;

/* Create the second node in the maze */

    prevNode = curNode;
    curNode = nextNode;
    nextNode = calloc(sizeof(struct squareNode), 1);

    curNode->north = NULL;
    curNode->east = NULL;
    curNode->west = nextNode;
    curNode->south = prevNode;


    return 0;
}