#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[])
{
    // A LINKED LIST THE SIZE OF 0
    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);

        node *n = malloc(sizeof(node));

        if (n == NULL)
        {
            return 1;
        }
        n->number = number;
        n->next = NULL;

        n->next = list;
        list = n;
    }
    // USE THE WHILE LOOP OR....
    node *ptr = list;
    while (ptr != NULL)
    // ... USE THE FOR LOOP
    // for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
    ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}

// // THIS WAS USDED FOR AN ARRAY DATA STRUCTURE
// int main(void)
// {

// // NEW ARRAY WITH A POINTER INSTEAD OF A SPECIFIC PLACE IN MEMORY ARRAY
//     int *list = malloc(3 * sizeof(int));
    // if (list == NULL)
    // {
    //     return 1;
    // }

//     list[0] = 1;
//     list[1] = 2;
//     list[2] = 3;


//     // PUT IN EXTRA MEMORY BITES INTO AN ARRAY
//     // int *tmp = malloc(4 * sizeof(int));
//     // SIMPLIFY
//     int *tmp = realloc(list, 4 * sizeof(int));
//     if (list == NULL)
//     {
//         free(list);
//         return 1;
//     }
//     list = tmp;
//     // WE DON'T NEED THIS BECAUSE WE ARE USING REALLOC
//     // for ( int i = 0; i < 3; i++ )
//     // {
//     //     tmp[i] = list[i];
//     //     printf("%i\n", list[i]);
//     // }

//     // tmp[3] = 4;
//     list[3] = 4;

//     // free(list);

//     // list = tmp;

//     for ( int i = 0; i < 3; i++ )
//     {
//         // PRINTS OUT INDEX
//         // printf("%i\n", i);
//         // PRINTS OUT INDEX VALUE
//         printf("%i\n", list[i]);
//     }

//     free(list);
//     return 0;

// // SIMPLE ARRAY ( WITH A SPECIFIC CHUNK OF MEMORY)
// //     int list[3];

//     // list[0] = 1;
//     // list[1] = 2;
//     // list[2] = 3;

//     // for ( int i = 0; i < 3; i++ )
//     // {
//     //     printf("%i\n", i);
//     // }
// }
