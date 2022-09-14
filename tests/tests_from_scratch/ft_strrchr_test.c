#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("\n --- Iniciando os testes ---\n\n");
	if (strrchr("Hello", 'e') == ft_strrchr("Hello", 'e'))
	{
		printf("Hello: \t\t\t\033[0;32m OK!\n");
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("Hello: \t\t\t\033[0;31m Fail!!\n");
		printf("\033[0;37m"); // white
	}
	if (strrchr("", '\0') == ft_strrchr("", '\0'))
	{
		printf("\"\" \t\t\t\033[0;32m Ok!\n");
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\"\" \t\t\t\033[0;31m Fail!!\n");
		printf("\033[0;37m"); // white
	}
	if (strrchr("Hello, brothers!", '!') == ft_strrchr("Hello, brothers!", '!'))
	{
		printf("Hello, brothers!: \t\033[0;32m Ok!\n");
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("Hello, brothers! \t\033[0;31m Fail!!\n");
		printf("\033[0;37m"); // white
	}
	printf("\n");
	return (0);
}
