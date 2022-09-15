#include "libft.h"
#include "libft_test.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <errno.h>

#define PRINTRED(X)	"\033[31m"X"\033[0m"
#define PRINTGRN(X)	"\033[32m"X"\033[0m"
#define RESET		"\033[0m"
#define BLACK		"\033[30m"      	/* Black */
#define RED			"\033[31m"      	/* Red */
#define GREEN		"\033[32m"      	/* Green */
#define YELLOW		"\033[33m"      	/* Yellow */
#define BLUE		"\033[34m"      	/* Blue */
#define MAGENTA		"\033[35m"      	/* Magenta */
#define CYAN		"\033[36m"      	/* Cyan */
#define WHITE		"\033[37m"			/* White */
#define BOLDBLACK   "\033[1m\033[30m"   /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"   /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"   /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"   /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"   /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"   /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"   /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"   /* Bold White */

int	ft_strtrim_test (void)
{
	char *x;
	printf("ft_strtrim:\n");
// 1
	printf("01:");
	x = ft_strtrim("Guilherme", " ");
	if (!strcmp(x, "Guilherme")) 
		printf(PRINTGRN("OK "));
	else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", x);
	}
	free(x);

// 2
	printf("02:");
	x = ft_strtrim(" Guilherme", " ");
	if (!strcmp(x, "Guilherme")) 
		printf(PRINTGRN("OK "));
	else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", x);
	}
	free(x);

// 3
	printf("03:");
	x = ft_strtrim("       Guilherme", " ");
	if (!strcmp(x, "Guilherme")) 
		printf(PRINTGRN("OK "));
	else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", x);
	}
	free(x);

// 4
	printf("04:");
	x = ft_strtrim(" 12 6367Guilherme17 59178", " 0123456789");
	if (!strcmp(x, "Guilherme")) 
		printf(PRINTGRN("OK "));
	else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", x);
	}
	free(x);

	char *s1;
    char *trimmed;
  
// 05
	printf("05:");
	s1 = strdup("zGUIz");
    trimmed = ft_strtrim(s1, "z");
    if (strcmp(trimmed, "GUI") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
	free(s1);
    free(trimmed);
    
// 06
	printf("06:");
    s1 = strdup("zxGUI");
    trimmed = ft_strtrim(s1, "z");
    if (strcmp(trimmed, "xGUI") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
    free(trimmed);
    free(s1);
    
// 07
	printf("07:");
    s1 = strdup("zxGUI");
    trimmed = ft_strtrim(s1, "xz");
    if (strcmp(trimmed, "GUI") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
    free(trimmed);
    free(s1);
    
// 08
	printf("08:");
    s1 = strdup("zzzzzzGUI");
    trimmed = ft_strtrim(s1, "xz");
    if (strcmp(trimmed, "GUI") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
    free(trimmed);
    free(s1);

// 09
	printf("09:");
    s1 = strdup("zzzxxzzzxxxxGUI");
    trimmed = ft_strtrim(s1, "xz");
    if (strcmp(trimmed, "GUI") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
    free(trimmed);
    free(s1);
    
// 10
	printf("10:");
    s1 = strdup("");
    trimmed = ft_strtrim(s1, "xz");
    if (strcmp(trimmed, "") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
    free(trimmed);
    free(s1);

// 11
	printf("11:");
    s1 = strdup("xGUI");
    trimmed = ft_strtrim(s1, "y");
    if (strcmp(trimmed, "xGUI") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
    free(trimmed);
    free(s1);
    
// 12
	printf("12:");
    s1 = strdup("xGUI");
    trimmed = ft_strtrim(s1, "");
    if (strcmp(trimmed, "xGUI") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
    free(trimmed);
    free(s1);

// 13
    printf("13:");
    s1 = strdup("zGUIz");
    trimmed = ft_strtrim(s1, "z");
    if (strcmp(trimmed, "GUI") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
    free(trimmed);
    free(s1);
    
// 14
	printf("14:");
    s1 = strdup("zzzGUIzzzzzz");
    trimmed = ft_strtrim(s1, "z");
    if (strcmp(trimmed, "GUI") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
    free(trimmed);
    free(s1);
    
// 15
	printf("15:");
    s1 = strdup("zzzGUIzzzzzz");
    trimmed = ft_strtrim(s1, "zxy");
    if (strcmp(trimmed, "GUI") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
    free(trimmed);
    free(s1);
    
// 16
	printf("16:");
    s1 = strdup("zzzGUIzzzxxxxxzzzyyyyy");
    trimmed = ft_strtrim(s1, "zxy");
    if (strcmp(trimmed, "GUI") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
    free(trimmed);
    free(s1);
    
// 17
	printf("17:");
    s1 = strdup("");
    trimmed = ft_strtrim(s1, "zxy");
    if (strcmp(trimmed, "") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
    free(trimmed);
    free(s1);
    
// 18
	printf("18:");
    s1 = strdup("xzyzyzGzUzIzyzyzx");
    trimmed = ft_strtrim(s1, "zxy");
    if (strcmp(trimmed, "GzUzI") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
    free(trimmed);
    free(s1);
    
// 19
	printf("19:");
    s1 = strdup("zGzUzIz");
    trimmed = ft_strtrim(s1, "");
    if (strcmp(trimmed, "zGzUzIz") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
    free(trimmed);
    free(s1);

// 20
	printf("20:");
    s1 = strdup("   xxx   xxx");
    trimmed = ft_strtrim(s1, " x");
    if (strcmp(trimmed, "") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
    free(trimmed);
    free(s1);

// 21
	printf("21:");
    s1 = strdup("         ");
    trimmed = ft_strtrim(s1, " ");
    if (strcmp(trimmed, "") == 0)
        printf(PRINTGRN("OK "));
    else
	{
		errno = -666;
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
    free(trimmed);
    free(s1);
	if (errno == -666)
		return (FAIL);
	else
		return (SUCCESS);
}
