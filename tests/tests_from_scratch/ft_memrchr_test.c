#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("\n --- Iniciando os testes ---\n\n");
	if (memrchr("Hello", 'e', 3) == ft_memrchr("Hello", 'e', 3))
	{
		printf("Hello: \t\t\t\033[0;32m OK!\n");
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("Hello: \t\t\t\033[0;31m Fail!!\n");
		printf("\033[0;37m"); // white
	}
	if (memrchr("", '\0', 1) == ft_memrchr("", '\0', 1))
	{
		printf("\"\" \t\t\t\033[0;32m Ok!\n");
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("\"\" \t\t\t\033[0;31m Fail!!\n");
		printf("\033[0;37m"); // white
	}
	if (memrchr("Hello, brothers!", '!', 4) == ft_memrchr("Hello, brothers!", '!', 4))
	{
		printf("Hello, brothers!: \t\033[0;32m Ok!\n");
		printf("\033[0;37m"); // white
	}
	else
	{
		printf("Hello, brothers! \t\033[0;31m Fail!!\n");
		printf("\033[0;37m"); // white
	}
	printf("Hello, -1, 2) %s\n", (char *)memrchr("Hello", -1, 2));
	printf("Hello, -1, 2) ft --> %s\n", (char *)ft_memrchr("Hello", -1, 2));
	printf("Hello, 300, 2) %s\n", (char *)memrchr("Hello", 300, 2));
	printf("Hello, 300, 2) ft --> %s\n", (char *)ft_memrchr("Hello", 300, 2));
	printf("Hello, 'e', 0) %s\n", (char *)memrchr("Hello", 'e', 0));
	printf("Hello, 'e', 0) ft --> %s\n", (char *)ft_memrchr("Hello", 'e', 0));
	printf("Hello, 'e', 2) %s\n", (char *)memrchr("Hello", 'e', 2));
	printf("Hello, 'e', 2) ft --> %s\n", (char *)ft_memrchr("Hello", 'e', 2));
	printf("Hello, 'x', 6) %s\n", (char *)memrchr("Hello", 'x', 6));
	printf("Hello, 'x', 6) ft --> %s\n", (char *)ft_memrchr("Hello", 'x', 6));
	printf("\n");
	return (0);
}
