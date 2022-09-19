#include "main.h"

/**
* _strcpy - Copiar el contenido de uno a orta variable
* @dest: This is destiny
* @src: This is the copia
*
* Return: This return copy
*/
char *_strcpy(char *dest, char *scr)
{
char *start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
