#include "main.h"
/**
*_strchr - locates a character in a string
*@s: parameter
*@c: parameter
*Return: character
*/
char *_strchr(char *s, char c)
{
unsigned int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return (0);
}
