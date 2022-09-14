#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("\n --- Iniciando os testes ---\n\n");
	if (strnstr("Hello", "Hello", 2) == ft_strnstr("Hello", "Hello", 2))
	{
		printf("Hello: \t\t\t\033[0;32m OK!\n");
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("Hello: \t\t\t\033[0;31m Fail!!\n");
		printf("\033[0;37m"); // white
	}
	if (strnstr("HeLlo", "HeLlo", 4) == ft_strnstr("HeLlo", "HeLlo", 4))
	{
		printf("\"\" \t\t\t\033[0;32m Ok!\n");
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\"\" \t\t\t\033[0;31m Fail!!\n");
		printf("\033[0;37m"); // white
	}
	if (strnstr("HeLlo", "HeLlo", 4) == ft_strnstr("HeLlo", "HeLlo", 4))
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
