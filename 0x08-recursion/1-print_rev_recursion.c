#include "main.h"
char *end(char *s)
{
*s = *(*(s + 1) + s);
return s;
}
/**
*_print_rev_recursion - prints a string in reverse
*@s: parameter
*/
void _print_rev_recursion(char *s)
{
    if(*s == '\0')
    {
    return;
    }
    if(*(s + 1) == '\0')
    {
        _putchar(*s);
    }
    s++;
    _print_rev_recursion(s);
}
