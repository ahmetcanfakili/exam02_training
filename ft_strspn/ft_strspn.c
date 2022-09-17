#include <string.h>
#include <unistd.h>
#include <stdio.h>

size_t strspn (const char *s1, const char *s2)
{
    const char *s = s1;
    const char *c;

    while (*s1)
    {
        for (c = s2; *c; c++)
        {
            if (*s1 == *c)
            break;
        }

        if (*c == '\0')
            break;
        s1++;
    }
    return (s1 - s);
}

int main () 
{
   int len;
   const char str1[] = "ABCDEFG019874";
   const char str2[] = "ABCD";

   len = strspn(str1, str2);

   printf("Length of initial segment matching %d\n", len );
   
   return(0);
}

 ???????????????????????????????**