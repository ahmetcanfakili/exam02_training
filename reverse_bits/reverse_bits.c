#include <stdio.h>

#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char	r = 0;
	int i = 8;

	while (i--)
	{
		r = (r << 1) | (octet & 1);
		octet >>= 1;
	}
	return (r);
}
