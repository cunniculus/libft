#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define PRINTRD(X)  "\033[31m"X"\033[0m"
#define PRINTGN(X)  "\033[32m"X"\033[0m"
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

int main (void)
{
/* 1 */
	char *x = ft_strtrim("Guilherme", " ");
	printf("1: %s\n", x);
	free(x);

/* 2 */
	x = ft_strtrim(" Guilherme", " ");
	printf("2: %s\n", x);
	free(x);

/* 3 */
	x = ft_strtrim("  Guilherme", " ");
	printf("3: %s\n", x);
	free(x);

/* 4 */
	x = ft_strtrim("  Guilherme", " ");
	printf("4: %s\n", x);
	free(x);
	/*
	
	x = ft_strtrim(" 12 6367Guilherme17 59178", " 0123456789");
	printf("%s\n", x);
	free(x);
	*/

	 char *s1;
    char *trimmed;
  
    s1 = strdup("zGUI");
    trimmed = ft_strtrim(s1, "z");
    if (strcmp(trimmed, "GUI") == 0)
        printf("1. "PRINTGN("OK! ")"%s\n", trimmed);
    else
        printf("1. "PRINTRD("FAIL! ")"%s\n", trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zxGUI");
    trimmed = ft_strtrim(s1, "z");
    if (strcmp(trimmed, "xGUI") == 0)
        printf("2. "PRINTGN("OK! ")"%s\n", trimmed);
    else
        printf("2. "PRINTRD("FAI! ")"%s\n", trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zxGUI");
    trimmed = ft_strtrim(s1, "xz");
    if (strcmp(trimmed, "GUI") == 0)
        printf("3. "PRINTGN("OK! ")"%s\n", trimmed);
    else
        printf("3. "PRINTRD("FAI! ")"%s\n", trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zzzzzzGUI");
    trimmed = ft_strtrim(s1, "xz");
    if (strcmp(trimmed, "GUI") == 0)
        printf("4. "PRINTGN("OK! ")"%s\n", trimmed);
    else
        printf("4. "PRINTRD("FAIL! ")"%s\n", trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zzzxxzzzxxxxGUI");
    trimmed = ft_strtrim(s1, "xz");
    if (strcmp(trimmed, "GUI") == 0)
        printf("5. "PRINTGN("OK! ")"%s\n", trimmed);
    else
        printf("5. "PRINTRD("FAIL! ")"%s\n", trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("");
    trimmed = ft_strtrim(s1, "xz");
    if (strcmp(trimmed, "") == 0)
        printf("6. "PRINTGN("OK! ")"%s\n", trimmed);
    else
        printf("6. "PRINTRD("FAIL! ")"%s\n", trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("xGUI");
    trimmed = ft_strtrim(s1, "y");
    if (strcmp(trimmed, "xGUI") == 0)
        printf("7. "PRINTGN("OK! ")"%s\n", trimmed);
    else
        printf("7. "PRINTRD("FAIL! ")"%s\n", trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("xGUI");
    trimmed = ft_strtrim(s1, "");
    if (strcmp(trimmed, "xGUI") == 0)
        printf("8. "PRINTGN("OK! ")"%s\n", trimmed);
    else
        printf("8. "PRINTRD("FAIL! ")"%s\n", trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zGUIz");
    trimmed = ft_strtrim(s1, "z");
    if (strcmp(trimmed, "GUI") == 0)
        printf("9. "PRINTGN("OK! ")"%s\n", trimmed);
    else
        printf("9. "PRINTRD("FAIL! %s\n"), trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zzzGUIzzzzzz");
    trimmed = ft_strtrim(s1, "z");
    if (strcmp(trimmed, "GUI") == 0)
        printf("10. "PRINTGN("OK! ")"%s\n", trimmed);
    else
        printf("10. "PRINTRD("FAIL! %s\n"), trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zzzGUIzzzzzz");
    trimmed = ft_strtrim(s1, "zxy");
    if (strcmp(trimmed, "GUI") == 0)
        printf("11. "PRINTGN("OK! ")"%s\n", trimmed);
    else
        printf("11. "PRINTRD("FAIL! %s\n"), trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zzzGUIzzzxxxxxzzzyyyyy");
    trimmed = ft_strtrim(s1, "zxy");
    if (strcmp(trimmed, "GUI") == 0)
        printf("12. "PRINTGN("OK! ")"%s\n", trimmed);
    else
        printf("12. "PRINTRD("FAIL! %s\n"), trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("");
    trimmed = ft_strtrim(s1, "zxy");
    if (strcmp(trimmed, "") == 0)
        printf("13. "PRINTGN("OK! ")"%s\n", trimmed);
    else
        printf("13. "PRINTRD("FAIL! %s\n"), trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("xzyzyzGzUzIzyzyzx");
    trimmed = ft_strtrim(s1, "zxy");
    if (strcmp(trimmed, "GzUzI") == 0)
        printf("14. "PRINTGN("OK! ")"%s\n", trimmed);
    else
        printf("14. "PRINTRD("FAIL! %s\n"), trimmed);
    free(trimmed);
    free(s1);
    
    s1 = strdup("zGzUzIz");
    trimmed = ft_strtrim(s1, "");
    if (strcmp(trimmed, "zGzUzIz") == 0)
        printf("15. "PRINTGN("OK! ")"%s\n\n", trimmed);
    else
        printf("15. "PRINTRD("FAIL! %s\n\n"), trimmed);
    free(trimmed);
    free(s1);

    s1 = strdup("   xxx   xxx");
    trimmed = ft_strtrim(s1, " x");
    if (strcmp(trimmed, "") == 0)
        printf("16. "PRINTGN("OK! ")"%s\n\n", trimmed);
    else
        printf("16. "PRINTRD("FAIL! %s\n\n"), trimmed);
    free(trimmed);
    free(s1);

    s1 = strdup("         ");
    trimmed = ft_strtrim(s1, " ");
    if (strcmp(trimmed, "") == 0)
        printf("16. "PRINTGN("OK! ")"%s\n\n", trimmed);
    else
        printf("16. "PRINTRD("FAIL! %s\n\n"), trimmed);
    free(trimmed);
    free(s1);
}

