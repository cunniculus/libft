#include <stdio.h>
#include <bsd/string.h>

int main ()
{
	char *s = "bcd";
	char d[3];

	memset(d, '\0', 2);
	memset(d, 'a', 1);

	printf("%zu\n", strlcat(d, s, 3));
	return (0);
}
