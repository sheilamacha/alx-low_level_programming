#include "main.h"
#include <stdio.h>
/**
* _strpbrk - Entry point
* @s: input
* @accept: input
* Return: Always 0 (Success) 
*/
char *_strpbrk(char *s, char *accept)
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
