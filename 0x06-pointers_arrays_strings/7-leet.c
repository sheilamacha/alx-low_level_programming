#include "main.h"
/**
*leet - function that encode a string
*@str:string that will be encoded
*Return:returns encoded string
*/

char *leet(char *str)
{
int indexl = 0, index2;
char leet[8] = {'o', 'l', '?', 'E', 'A', '?', '?', 'T'};

while (str[++indexl])
{
for (index2 = 0; index2 <= 7; index2++)
{
if (str[indexl] == leet[index2] ||
str[indexl] - 32 == leet[index2])
str[indexl] = index2 + '0';
}
}
return (str);
}
