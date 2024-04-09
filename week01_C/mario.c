#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
    // VERION IV ============================botoom for 2 more functions
    int n = get_size();
    print_grid(n);

    // VERION III ===========================
    // // get size of the grid
    // int n;
    // do
    // {
    //     n = get_int("Size: ");
    // }
    // while (n < 1);

    // // prints grid of bricks
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("#");
    //     }
    //     printf("\n");
    // }

    // VERION II ============================

    // int n = get_int("Size: ");
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("#");
    //     }
    //     printf("\n");
    // }

    // VERION I =============================

    // const int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("#");
    //     }
    //     printf("\n");
    // }
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}
