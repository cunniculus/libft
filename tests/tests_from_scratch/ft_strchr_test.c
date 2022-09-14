#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("\n --- Iniciando os testes ---\n\n");
	if (strchr("Hello", 'e') == ft_strchr("Hello", 'e'))
	{
		printf("Hello: \t\t\t\033[0;32m OK!\n");
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("Hello: \t\t\t\033[0;31m Fail!!\n");
		printf("\033[0;37m"); // white
	}
	if (strchr("", '\0') == ft_strchr("", '\0'))
	{
		printf("\"\" \t\t\t\033[0;32m Ok!\n");
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\"\" \t\t\t\033[0;31m Fail!!\n");
		printf("\033[0;37m"); // white
	}
	if (strchr("Hello, brothers!", '!') == ft_strchr("Hello, brothers!", '!'))
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
