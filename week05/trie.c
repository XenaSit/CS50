#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char *number;
    struct node *children[26];
}
node;

node *tries;
