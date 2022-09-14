#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"

#define PRINTRED(x)  "\x1B[31m"x"\x1B[37m"
#define PRINTGRN(x)  "\x1B[32m"x"\x1B[37m"
#define PRINTYEL(x)  "\x1B[33m"x"\x1B[37m"

int main ()
{
	char *substr;
	substr = ft_substr("Home alone, man!", 0, 3);
	if (!ft_strncmp(substr, "Hom", 3))
		printf(PRINTGRN("\"Home alone, man!\", 0, 3 -- >OK!\n"));
	else
		printf(PRINTRED("Fail!\n"));
	printf("%s\n", substr);
	free(substr);

	substr = ft_substr("Home alone, man!", 5, 5);
	if (!strncmp(substr, "alone,", 5))
		printf(PRINTGRN("\"Home alone, man!\", 5, 5 -- >OK!\n"));
	else
		printf(PRINTRED("Fail!\n"));
	printf("%s\n", substr);
	free(substr);

	substr = ft_substr("Home alone, man!", 12, 4);
	if (!strncmp(substr, "man!", 4))
		printf(PRINTGRN("\"Home alone, man!\", 12, 4 -- >OK!\n"));
	else
		printf(PRINTRED("Fail!\n"));
	printf("%s\n", substr);
	free(substr);


	substr = ft_substr("Home alone, man!", 12, 6);
	if (!strncmp(substr, "man!", 6))
		printf(PRINTGRN("\"Home alone, man!\", 12, 6 -- >OK!\n"));
	else
		printf(PRINTRED("Fail!\n"));
	printf("%s\n", substr);
	free(substr);

	substr = ft_substr("", 0, 1);
	if (!strncmp(substr, "", 1))
		printf(PRINTGRN("empty string, 0, 1 -- >OK!\n"));
	else
		printf(PRINTRED("Fail!\n"));
	printf("%s\n", substr);
	free(substr);

	substr = ft_substr("", 1, 1);
	if (!strncmp(substr, "", 1))
		printf(PRINTGRN("empty string, 1, 1 -- >OK!\n"));
	else
		printf(PRINTRED("Fail!\n"));
	printf("%s\n", substr);
	free(substr);

	substr = ft_substr("", 2, 1);
	if (!strncmp(substr, "", 1))
		printf(PRINTGRN("empty string, 2, 1 -- >OK!\n"));
	else
		printf(PRINTRED("Fail!\n"));
	printf("%s\n", substr);
	free(substr);

	substr = ft_substr("", 2, 2);
	if (!strncmp(substr, "", 2))
		printf(PRINTGRN("empty string, 2, 2 -- >OK!\n"));
	else
		printf(PRINTRED("Fail!\n"));
	printf("%s\n", substr);
	free(substr);
}

