#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
// ==========================================
    // int x = get_int("What's x? ");
    // int y = get_int("What's y? ");

    // if (x < y)
    // {
    //     printf("x is less than y\n");
    // }
    // else if (x > y)
    // {
    //     printf("x is greater than y\n");
    // }
    // else
    // {
    //     printf("x is equal to y\n");
    // }
// ==========================================
// NEW LESSON MODIFICATION COMPARE LOCATIONS
    // char *s = get_string("s: ");
    // char *t = get_string("t: ");

    // if (s == t)
    // {
    //     printf("Same\n");
    // }
    // else
    // {
    //     printf("Different\n");
    // }
    // ==========================================
// NEW LESSON MODIFICATION COMPARE STRINGS with #include <string.h>
    // string s = get_string("s: ");
    // string t = get_string("t: ");

    // if (strcmp(s, t) == 0)
    // {
    //     printf("Same\n");
    // }
    // else
    // {
    //     printf("Different\n");
    // }
// NEW LESSON MODIFICATION COMPARE STRINGS
    string s = get_string("s: ");
    string t = get_string("t: ");

    printf("%p\n", s);
    printf("%p\n", t);
}
