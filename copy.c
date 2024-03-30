#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
// NEW LIBRARY for malloc and free to manage your own memory
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");
// NULL Command
    if (s == NULL)
    {
        return 1;
    }
// INSTEAD OF THIS USE: =========================
    // char *t = s;
    // if (strlen(t) > 0)
    // {
    // t[0] = toupper(t[0]);
    // }
// DO THIS =====================================
    char *t = malloc(strlen(s) + 1);
// NULL Command
    if (t == NULL)
    {
        return 1;
    }

    // for (int i = 0; i < strlen(s) + 1; i++)
    // {
    //     t[i] = s[i];
    // }
// OR =================================================
    // for (int i = 0, n = strlen(s) + 1; i < n; i++)
    // {
    //     t[i] = s[i];
    // }
// OR =================================================
    strcpy(t, s);

    if (strlen(t) > 0)
    {
    t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

// use FREE memory
    free(t);
    
    return 0;
}
