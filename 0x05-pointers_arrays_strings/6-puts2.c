#include "main.h"

/**
*puts2 - prints every other character of a string
*@str: parameter
*/
void puts2(char *str)
{
int i = 0, j = 0;
while (str[i] != '\0')
{
i++;
}
while (j < i - 1)
{
if(j % 2 == 0){
_putchar(str[j]);
}
j++;
}
_putchar(10);
}
