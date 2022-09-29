#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
		while(*s1)
		{
			i = 0;
			while(s2[i])
			{
				if (*s1 == s2[i])
					return((char *) s1);
				i++;
			}
			s1++;
		}
	return (0);
}

int main( void )
{
    const char *cp1 = "Bilgisayar";
    const char *cp2 = "esy";
    char *ret = strpbrk(cp1, cp2);

    printf("%s karakter dizisinde bulunan ilk karakterin değeri: %c, adresi: %p, indeksi: %d\n", cp1, *ret, ret, ret-cp1);

    return 0;
}