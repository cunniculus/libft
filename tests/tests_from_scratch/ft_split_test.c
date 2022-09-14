#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include "libft_test.h"

#define PRINTRED(x)  "\x1B[31m"x"\x1B[37m"
#define PRINTGRN(x)  "\x1B[32m"x"\x1B[37m"
#define PRINTYEL(x)  "\x1B[33m"x"\x1B[37m"

static void	print_split(char **split);
static void	free_split(char **split);

void	ft_split_test (void)
{
	char **split;

	printf("ft_split:\n");
	//01
	printf("01. ");
	split = ft_split("Home alone, man!", ' ');
	if (!strcmp(split[0], "Home") && \
			!strcmp(split[1], "alone,")  && \
			!strcmp(split[2], "man!") && \
			split[3] ==  NULL)
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		print_split(split);
	}
	free_split(split);

//02
	printf("02. ");
	split = ft_split("Home     alone,  man!       ", ' ');
	if (!ft_strncmp(split[0], "Home", ft_strlen(split[0])) && \
			!ft_strncmp(split[1], "alone,", ft_strlen(split[1]))  && \
			!ft_strncmp(split[2], "man!", ft_strlen(split[2])) && split[3] ==  NULL)
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		print_split(split);
	}
	free_split(split);

//03
	printf("03. ");
	split = ft_split("          Home    alone,    man!", ' ');
	if (!ft_strncmp(split[0], "Home", ft_strlen(split[0])) && \
			!ft_strncmp(split[1], "alone,", ft_strlen(split[1]))  && \
			!ft_strncmp(split[2], "man!", ft_strlen(split[2])) && split[3] ==  NULL)
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		print_split(split);
	}
	free_split(split);

//04
	printf("04. ");
	split = ft_split("Home", ' ');
	if (!ft_strncmp(split[0], "Home", ft_strlen(split[0]) + 1) && \
			split[1] ==  NULL)
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		print_split(split);
	}
	free_split(split);

//05
	printf("05. ");
	split = ft_split("Home        ", ' ');
	if (!ft_strncmp(split[0], "Home", ft_strlen(split[0]) + 1) && \
			split[1] ==  NULL)
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		print_split(split);
	}
	free_split(split);

//06
	printf("06. ");
	split = ft_split("         Home        ", ' ');
	if (!ft_strncmp(split[0], "Home", ft_strlen(split[0]) + 1) && \
			split[1] ==  NULL)
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		print_split(split);
	}
	free_split(split);

//07
	printf("07. ");
	split = ft_split("         Home", ' ');
	if (!ft_strncmp(split[0], "Home", ft_strlen(split[0]) + 1) && \
			split[1] ==  NULL)
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		print_split(split);
	}
	free_split(split);

//08
	printf("08. ");
	split = ft_split("Trepouille", ' ');
	if (!ft_strncmp(split[0], "Trepouille", ft_strlen(split[0]) + 1) && \
			split[1] ==  NULL)
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		print_split(split);
	}
	free_split(split);

//09
	printf("09. ");
	split = ft_split("      tripouille     42     ", ' ');
	if (!strcmp(split[0], "tripouille") && !strcmp(split[1], "42") && split[2] == NULL)
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		print_split(split);
	}
	free_split(split);

//10
	printf("10. ");
	split = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	if (!ft_strncmp(split[0], "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", ft_strlen(split[0]) + 1) && \
			split[1] ==  NULL)
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		print_split(split);
	}
	free_split(split);

//11
	printf("11. ");
	split = ft_split("", ' ');
	if ( split[0] ==  NULL)
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		print_split(split);
	}
	free_split(split);

//12
	printf("12. ");
	split = ft_split("       ", ' ');
	if ( split[0] ==  NULL)
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		print_split(split);
	}
	free_split(split);

//13
	printf("13. ");
	split = ft_split("   .  ", ' ');
	if (!strcmp(split[0], ".") && split[1] ==  NULL)
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		print_split(split);
	}
	free_split(split);

//14
	printf("14. ");
	split = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus.", ' ');
	if (!strcmp(split[0], "lorem") && !strcmp(split[1], "ipsum") && \
			!strcmp(split[2], "dolor") && !strcmp(split[3], "sit") && \
			!strcmp(split[4], "amet,") && !strcmp(split[5], "consectetur") && \
			!strcmp(split[6], "adipiscing") && !strcmp(split[7], "elit.") && \
			!strcmp(split[8], "Sed") && !strcmp(split[9], "non") && \
			!strcmp(split[10], "risus.") && split[11] ==  NULL)
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		print_split(split);
	}
	free_split(split);

//15
	printf("15. ");
	split = ft_split ("tripouille", 0);
	if (!strcmp(split[0], "tripouille") && split[1]  ==  NULL)
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		print_split(split);
	}
	free_split(split);

//16
	printf("16. ");
	split = ft_split ("--1-2--3---4----5-----42", '-');
	if (!strcmp(split[0], "1") && \
		!strcmp(split[1], "2") && \
		!strcmp(split[2], "3") &&\
		!strcmp(split[3], "4") && \
		!strcmp(split[4], "5") && \
		!strcmp(split[5], "42") && \
		split[6]  ==  NULL)
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		print_split(split);
	}
	free_split(split);
	printf("\n");
}

static void	print_split(char **split)
{
	int i = 0;
	while (split[i])
	{
		printf("%s ", split[i]);
		i++;
	}
	printf("%s ", split[i]);
	printf(" ");
}

static void	free_split(char **split)
{
	int i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}
