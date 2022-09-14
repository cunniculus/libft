#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

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

void	ft_strtrim_test (void)
{
	char *x;
// 1
	printf("01:");
	x = ft_strtrim("Guilherme", " ");
	if (!strcmp(x, "Guilherme")) 
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		printf("%s ", x);
	}
	free(x);

// 2
	printf("02:");
	x = ft_strtrim(" Guilherme", " ");
	if (!strcmp(x, "Guilherme")) 
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		printf("%s ", x);
	}
	free(x);

// 3
	printf("03:");
	x = ft_strtrim("       Guilherme", " ");
	if (!strcmp(x, "Guilherme")) 
		printf(PRINTGRN("OK! "));
	else
	{
		printf(PRINTRED("FAIL! "));
		printf("%s ", x);
	}
	free(x);

// 4
	printf("04:");
	x = ft_strtrim(" 12 6367Guilherme17 59178", " 0123456789");
	if (!strcmp(x, "Guilherme")) 
		printf(PRINTGRN("OK! "));
	else
	{
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
        printf(PRINTGRN("OK! "));
    else
	{
		printf(PRINTRED("FAIL! "));
		printf("%s ", trimmed);
	}
	free(s1);
    free(trimmed);
    
    s1 = strdup("zxGUI");
    trimmed = ft_strtrim(s1, "z");
    if (strcmp(trimmed, "xGUI") == 0)
        printf("2. "PRINTGRN("OK! ")"%s\n", trimmed);
    else
        printf("2. "PRINTRED("FAI! ")"%s\n", trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zxGUI");
    trimmed = ft_strtrim(s1, "xz");
    if (strcmp(trimmed, "GUI") == 0)
        printf("3. "PRINTGRN("OK! ")"%s\n", trimmed);
    else
        printf("3. "PRINTRED("FAI! ")"%s\n", trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zzzzzzGUI");
    trimmed = ft_strtrim(s1, "xz");
    if (strcmp(trimmed, "GUI") == 0)
        printf("4. "PRINTGRN("OK! ")"%s\n", trimmed);
    else
        printf("4. "PRINTRED("FAIL! ")"%s\n", trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zzzxxzzzxxxxGUI");
    trimmed = ft_strtrim(s1, "xz");
    if (strcmp(trimmed, "GUI") == 0)
        printf("5. "PRINTGRN("OK! ")"%s\n", trimmed);
    else
        printf("5. "PRINTRED("FAIL! ")"%s\n", trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("");
    trimmed = ft_strtrim(s1, "xz");
    if (strcmp(trimmed, "") == 0)
        printf("6. "PRINTGRN("OK! ")"%s\n", trimmed);
    else
        printf("6. "PRINTRED("FAIL! ")"%s\n", trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("xGUI");
    trimmed = ft_strtrim(s1, "y");
    if (strcmp(trimmed, "xGUI") == 0)
        printf("7. "PRINTGRN("OK! ")"%s\n", trimmed);
    else
        printf("7. "PRINTRED("FAIL! ")"%s\n", trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("xGUI");
    trimmed = ft_strtrim(s1, "");
    if (strcmp(trimmed, "xGUI") == 0)
        printf("8. "PRINTGRN("OK! ")"%s\n", trimmed);
    else
        printf("8. "PRINTRED("FAIL! ")"%s\n", trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zGUIz");
    trimmed = ft_strtrim(s1, "z");
    if (strcmp(trimmed, "GUI") == 0)
        printf("9. "PRINTGRN("OK! ")"%s\n", trimmed);
    else
        printf("9. "PRINTRED("FAIL! %s\n"), trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zzzGUIzzzzzz");
    trimmed = ft_strtrim(s1, "z");
    if (strcmp(trimmed, "GUI") == 0)
        printf("10. "PRINTGRN("OK! ")"%s\n", trimmed);
    else
        printf("10. "PRINTRED("FAIL! %s\n"), trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zzzGUIzzzzzz");
    trimmed = ft_strtrim(s1, "zxy");
    if (strcmp(trimmed, "GUI") == 0)
        printf("11. "PRINTGRN("OK! ")"%s\n", trimmed);
    else
        printf("11. "PRINTRED("FAIL! %s\n"), trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zzzGUIzzzxxxxxzzzyyyyy");
    trimmed = ft_strtrim(s1, "zxy");
    if (strcmp(trimmed, "GUI") == 0)
        printf("12. "PRINTGRN("OK! ")"%s\n", trimmed);
    else
        printf("12. "PRINTRED("FAIL! %s\n"), trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("");
    trimmed = ft_strtrim(s1, "zxy");
    if (strcmp(trimmed, "") == 0)
        printf("13. "PRINTGRN("OK! ")"%s\n", trimmed);
    else
        printf("13. "PRINTRED("FAIL! %s\n"), trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("xzyzyzGzUzIzyzyzx");
    trimmed = ft_strtrim(s1, "zxy");
    if (strcmp(trimmed, "GzUzI") == 0)
        printf("14. "PRINTGRN("OK! ")"%s\n", trimmed);
    else
        printf("14. "PRINTRED("FAIL! %s\n"), trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zGzUzIz");
    trimmed = ft_strtrim(s1, "");
    if (strcmp(trimmed, "zGzUzIz") == 0)
        printf("15. "PRINTGRN("OK! ")"%s\n\n", trimmed);
    else
        printf("15. "PRINTRED("FAIL! %s\n\n"), trimmed);
    free(trimmed);
    free(s1);

    s1 = strdup("   xxx   xxx");
    trimmed = ft_strtrim(s1, " x");
    if (strcmp(trimmed, "") == 0)
        printf("16. "PRINTGRN("OK! ")"%s\n\n", trimmed);
    else
        printf("16. "PRINTRED("FAIL! %s\n\n"), trimmed);
    free(trimmed);
    free(s1);

    s1 = strdup("         ");
    trimmed = ft_strtrim(s1, " ");
    if (strcmp(trimmed, "") == 0)
        printf("16. "PRINTGRN("OK! ")"%s\n\n", trimmed);
    else
        printf("16. "PRINTRED("FAIL! %s\n\n"), trimmed);
    free(trimmed);
    free(s1);
}
