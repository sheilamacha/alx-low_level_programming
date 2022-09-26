#include "main.h"
#include <stdio.h>
/**
* _strpbrk - prints the consecutive characters of s1 that are in s2.
* @s: source string
* @accept: searching string
*
* Return: new string.
*/
char *strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; *(accept + j); j++)
{
if (*(s + i) == *(accept + j))
{
break;
}
}
if (*(accept + j) != '\0')
{
return (s + i);
}
}
return (0);
}
