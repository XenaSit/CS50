// #include <cs50.h>
#include <stdio.h>

int main(void)
{
    // int n = 50;
    // printf("%i\n", n);
    // printf("%p\n", &n);

    // int n = 50;
    // int *p = &n;
    // printf("%p\n", p);

    // // with #include <cs50.h>
    // string s = "HI!";
    // char *s = "HI!";
    // printf("%s\n", s);

    // int n = 50;
    // int *p = &n;
    // printf("%i\n", *p);
// ====================================================================
    // char *s = "HI!";
    // // print the address of the variable
    // printf("%s\n", s);
    // // print the actual value of the addrees
    // printf("%p\n", s);
    // // print the address of the index in the variable
    // printf("%p\n", &s[0]);
    // printf("%p\n", &s[1]);
    // printf("%p\n", &s[2]);
    // printf("%p\n", &s[3]);
    // // print out each value with %c
    // printf("%c\n", s[0]);
    // printf("%c\n", s[1]);
    // printf("%c\n", s[2]);
    // // print out with POINTER ARITHMETIC
    // printf("%c\n", *s);
    // printf("%c\n", *(s+1));
    // printf("%c\n", *(s+20000)); // Segmentation fault (core dumped)
// ======================================================================
    char *s = "HI!";
    printf("%s\n", s);
    printf("%s\n", s+1);
    printf("%s\n", s+2);
}
